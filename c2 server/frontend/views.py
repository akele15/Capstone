from django.shortcuts import render, redirect
from api.models import InviteCode
from api.serializers import InviteCodeSerializer
from rest_framework import generics, permissions 
from django.http import HttpResponse
from rest_framework.permissions import IsAuthenticated,IsAdminUser
from django.views import View
from django.contrib.admin.views.decorators import staff_member_required
import random
from .forms import *
from django.contrib.auth import authenticate, login, logout
# Create your views here.
class InviteCodeView(View):
    permission_classes = (permissions.IsAdminUser,)
    def get(self,request):
        if not request.user.is_authenticated:
            # replace with login page
            return redirect('/admin')
        if not request.user.is_superuser:
            return redirect('/admin')
        stuff=""
        qs= InviteCode.objects.exists()
        if qs:
            print("true")
            aset=InviteCode.objects.last()
            print(aset.Code)
            stuff= InviteCode.objects.all()[0].Code
            print(stuff)
            return render(request,'frontend/invitecode.html',{"invite_code":stuff})
        else:
            Invite= InviteCode()
            for x in range(15):
                Invite.Code+= chr(random.randint(41, 122))
            print(Invite.Code)
            stuff=Invite.Code
            print(stuff)
            Invite.save()
            return render(request,'frontend/invitecode.html',{"invite_code":stuff})

def user_login(request):
    if request.method =="POST":
        user_name = request.POST["username"]
        password = request.POST["password"]
        user= authenticate(
        request,
        username=user_name,
        password=password
    )
        if user is None:
            return redirect('/login')
        login(request,user)
        return HttpResponse("valid credentials.")
    else:
        form=UserForm()
        return render(request, "frontend/login2.html", {'form':form})

def user_register(request):
    if not InviteCode.objects.exists():
        return HttpResponse("Please wait for the admin to finish setting up")
    if request.method=="POST":
        #user_name= request.POST["username"]
        #pass1 = request.POST["password"]
        #pass2 = request.POST["confirm_password"]
        #invite_code= request.POST["invite_code"]
        form = RegisterForm(request.POST)
        CurrentCode=InviteCode.objects.last().Code
        print(CurrentCode)
        if form.is_valid():
            if form.cleaned_data['password']==form.cleaned_data['confirm_password'] and CurrentCode==form.cleaned_data['invite_code']:
                new_user = User.objects.create_user(form.cleaned_data['username'] ,'',form.cleaned_data['password'])
                print("saving")
                new_user.save()
                return HttpResponse("registered")
            else:
                return redirect("/register")
        else:
            return redirect("/register")
        #render(request,"frontend/register.html",{'form':form})
    else:
        form=RegisterForm()
        return render(request,"frontend/register.html",{'form':form})
    #return render(request,"frontend/login2.html")