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
from django.contrib.auth.decorators import login_required 
from django.shortcuts import get_object_or_404
#from filehash import FileHash
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
#@login_required
def agent(request,agent_id):
    the_id= get_object_or_404(Agent, pk=agent_id)
    if request.method=="POST":
        #return HttpResponse("post")
        post_data = request.POST or None
        shell_form= ShellCommandForm(request.POST,prefix= 'command')
        file_form= FileTransferForm(request.POST,request.FILES,prefix= 'files')
        # if file_form.is_valid():
        #     return HttpResponse("trigger")
        # else:
        #     return HttpResponse("miss")
        if shell_form.is_valid():
            #return HttpResponse("shell valid")
            #return HttpResponse("shell form is valid")
            #if shell_form.cleaned_data['action_type']=="ShellCommand":
            command_log= UserActionLog()
            command_log.User=request.user
            command_log.Command= shell_form.cleaned_data['command']
            command_log.Agent=Agent.objects.get(pk=agent_id)
            command_log.Queued= True
            command_log.CommandType='ShellCommand'
            #command_log.TransferLog= ""
            command_log.save()
            form=ShellCommandForm()
            file_form= FileTransferForm()
            return render(request,"frontend/agent.html",{'form':form, 'id':agent_id,'file_form':file_form})
            #Shell form not valid 
            # else:
            #     form=ShellCommandForm()
            #     file_form= FileTransferForm()
            #     return render(request,"frontend/agent.html",{'form':form, 'id':agent_id,'file_form':file_form})
                # invalid form
        #return render(request,"frontend/agent.html",{'form':form, 'id':agent_id})
        if file_form.is_valid():
            #return HttpResponse("valid")
            if file_form.cleaned_data['direction']=='Download':
                command_log=UserActionLog()
                command_log.User=request.user
                command_log.Agent=Agent.objects.get(pk=agent_id)
                command_log.Queued= True
                command_log.CommandType='FileTransfer'
                file_log=FileTransferLog()
                file_log.User=request.user
                file_log.FileName=file_form.cleaned_data['filename']
                file_log.Path=file_form.cleaned_data['path_to_file']
                #file_log.File=request.FILES['files-file_to_upload'] 
                #file_log.FileName=file_log.File.name
                file_log.direction='Download'
                #TODO write hash function
                #file_log.Hash= 
                #sha1hasher = FileHash('sha1')
                #sha1hasher.hash_file(file_log.File)
                file_log.save()
                command_log.TransferLog=file_log
                command_log.save()
                # display form again
                # form=ShellCommandForm()
                # file_form= FileTransferForm()
                # return render(request,"frontend/agent.html",{'form':form, 'id':agent_id,'file_form':file_form})
                # return HttpResponse("file form valid d saved")
            if file_form.cleaned_data['direction']=='Upload':
                command_log=UserActionLog()
                command_log.User=request.user
                command_log.Agent=Agent.objects.get(pk=agent_id)
                command_log.Queued= True
                command_log.CommandType='FileTransfer'

                file_log=FileTransferLog()
                file_log.User=request.user
                file_log.File=request.FILES['files-file_to_upload'] 
                file_log.FileName=file_log.File.name
                file_log.direction='Upload'
                #file_log.Path= file_form.cleaned_data['path_to_file']
                file_log.save()
                command_log.TransferLog=file_log
                command_log.save()
                # form=ShellCommandForm()
                # file_form= FileTransferForm()
                # return render(request,"frontend/agent.html",{'form':form, 'id':agent_id,'file_form':file_form})
                #return HttpResponse("file form valid u")
        form=ShellCommandForm()
        file_form= FileTransferForm()
        return render(request,"frontend/agent.html",{'form':form, 'id':agent_id,'file_form':file_form}) 
       # if file_form.path_to_file != "":
       #     return HttpResponse("path exists")
      #  if file_form.file_to_upload:
         #   return HttpResponse("file form not valid")
    # get request
    else:
        # context = (shell_form= ShellCommandForm,                                      file_form= FileTransferForm)
        form=ShellCommandForm()
        file_form= FileTransferForm()
        return render(request,"frontend/agent.html",{'form':form, 'id':agent_id,'file_form':file_form})
        return HttpResponse("agent"+" "+ str(agent_id))
def agentselect(request):
    agent_list=Agent.objects.all()
    context = {'agent_list': list(agent_list)}
    #return HttpResponse("hi")
    return render(request, 'frontend/agentselect.html', context)

# def test(request):
#     if request.method=="POST":
#         file_form= FileTransferForm(request.POST,request.FILES)
#         if file_form.is_valid():
#             return HttpResponse("valid")
#         else:
#             return HttpResponse("not valid")
#     else:
#         file_form= FileTransferForm()
#         return render(request, 'frontend/test.html',{'form':file_form})
