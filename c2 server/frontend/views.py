from django.shortcuts import render, redirect
from api.models import InviteCode
from api.serializers import InviteCodeSerializer
from rest_framework import generics, permissions 
from rest_framework.permissions import IsAuthenticated,IsAdminUser
from django.views import View
from django.contrib.admin.views.decorators import staff_member_required
import random
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

def login(request):
    return render(request,"frontend/login2.html")