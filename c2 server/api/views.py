from django.shortcuts import render
from rest_framework.views import APIView
from .models import *
from .serializers import *
from rest_framework.response import Response
from rest_framework import status
from django.shortcuts import get_object_or_404
from rest_framework.decorators import api_view, renderer_classes
from django.views.decorators.csrf import csrf_exempt
from rest_framework.renderers import JSONRenderer
from django.http import HttpResponse
from django.http import JsonResponse
from rest_framework.exceptions import ParseError
from rest_framework.parsers import FileUploadParser
import hashlib
from django.utils import timezone
# Create your views here.
class RegisterAgent(APIView):
    serializer_class= AgentSerializer()
    def post(self, request):
        print(request.data)
        Serializer= AgentSerializer( data=request.data)
        if Serializer.is_valid():
            Serializer.save()
            return Response(Serializer.data, status=status.HTTP_201_CREATED)
        return Response(Serializer.errors, status=status.HTTP_400_BAD_REQUEST)
#Done: remember to change queue status then save
#Done: fix if statement
class checkin(APIView):
    #serializer_class= UserActionLogSerializer()
    def get(self,request,agent_id):
        agent= get_object_or_404(Agent, pk=agent_id)
        print(agent)
        if UserActionLog.objects.filter(Agent=agent, Queued=True).exists():
            command=UserActionLog.objects.filter(Agent=agent, Queued=True).first()
            command.Queued=False
            command.Date=timezone.now()
            command.save()
            # if command.CommandType=='FileTransfer':
            #     serializer= FileTransferLogSerializer(command.TransferLog)
            #     return Response(serializer.data,status=status.HTTP_200_OK)
            serializer = UserActionLogSerializer(command)
            return Response(serializer.data,status=status.HTTP_200_OK)
        else:
            return Response(status=status.HTTP_204_NO_CONTENT)
@csrf_exempt
@renderer_classes(JSONRenderer,)
@api_view(('Post',))
def AgentReportOutput(request):
    if request.method=="POST":
        an_id=request.POST.get("id")
        log=get_object_or_404(UserActionLog, pk=an_id)
        log.Output=request.POST.get("output")
        log.save()
        return Response(status=status.HTTP_201_CREATED)

def AgentDownload(request,file_id):
    if request.method=="GET":
        log=get_object_or_404(UserActionLog, pk=file_id)
        data=log.TransferLog.File
        response = HttpResponse(data, headers={
            'Content-Type': 'application/vnd.ms-excel',
            'Content-Disposition': 'attachment; filename="%s"'%log.TransferLog.FileName, })
        return response
    else:
        return Response(status=status.HTTP_404_METHOD_NOT_ALLOWED)
@csrf_exempt
@renderer_classes(JSONRenderer,)
@api_view(('Post',))
def AgentUpload(request, file_id):
    if request.method == "POST":
        log=get_object_or_404(UserActionLog, pk=file_id)
        print(request.FILES['file'].name)
        log.TransferLog.File=request.FILES['file']
        log.TransferLog.FileName=request.FILES['file'].name
        log.TransferLog.Hash=hashlib.sha256(log.TransferLog.File.file.read()).hexdigest()
        log.TransferLog.save()
        log.save()
        #log.TransferLog.FileName= request.FILES.name
        #log.TransferLog.FileName=log.TransferLog.File.name
        return Response(status=status.HTTP_200_OK)
    else:
        return Response(status=status.HTTP_404_METHOD_NOT_ALLOWED)

