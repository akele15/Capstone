from django.shortcuts import render, redirect
from api.models import InviteCode
from api.serializers import InviteCodeSerializer
from rest_framework import generics, permissions 
from django.http import HttpResponse
from rest_framework.permissions import IsAuthenticated,IsAdminUser
from django.views import View
from django.contrib.admin.views.decorators import staff_member_required
import random
from .forms import UserForm
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
            return HttpResponse("Invalid credentials.")
        login(request,user)
        return HttpResponse("valid credentials.")
    else:
        form=UserForm()
        return render(request, "frontend/login2.html", {'form':form})


    #return render(request,"frontend/login2.html")