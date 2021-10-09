from django.shortcuts import render
from rest_framework.views import APIView
from .models import *
from .serializers import *
from rest_framework.response import Response
from rest_framework import status
from django.shortcuts import get_object_or_404
from rest_framework.decorators import api_view, renderer_classes
from rest_framework.renderers import JSONRenderer
from django.http import HttpResponse
from django.http import JsonResponse
# Create your views here.
class RegisterAgent(APIView):
    serializer_class= AgentSerializer()
# not gonna lie not sure what arguments post is suppose to take
    def post(self, request):
        print(request.data)
        Serializer= AgentSerializer( data=request.data)
        if Serializer.is_valid():
            # if request.user == Workspace.objects.get(id=request.POST.get('workspaceid')).owner:
                #this actually saves the data in the database
            Serializer.save()
            return Response(Serializer.data, status=status.HTTP_201_CREATED)
        return Response(Serializer.errors, status=status.HTTP_400_BAD_REQUEST)
# remember to change queue status then save
class checkin(APIView):
    serializer_class= UserActionLogSerializer()
    def get(self,request,agent_id):
        agent= get_object_or_404(Agent, pk=agent_id)
        if UserActionLog.objects.filter(Agent=agent).exists():
            command=UserActionLog.objects.filter(Agent=agent, Queued=True).first()
            command.Queued=False
            command.save()
            serializer = UserActionLogSerializer(command)
            return Response(serializer.data,status=status.HTTP_200_OK)
        else:
            return Response(status=status.HTTP_204_NO_CONTENT)


# class checkin(viewsets.ReadOnlyModelViewSet,agent_id):
#     """
#     Lists information related to the current user.
#     """
#     serializer_class = UserActionLogSerializer
#     def get(self):
#         user = self.request.user.id
#         return User.objects.filter(id=user)



# @api_view(('GET',))
# @renderer_classes(JSONRenderer,)
# def checkin(request,agent_id):
#     if request.method=="GET":
#         # return HttpResponse("hi")
#         agent= get_object_or_404(Agent, pk=agent_id)
#         if UserActionLog.objects.filter(Agent=agent).exists():
#             print("before")
#             #command=UserActionLog.objects.filter(Agent=agent).first()
#             print("after")
#             #command.Queued= False
#             #command.save()
#             return HttpResponse("stuff")
#             #serializer = UserActionLogSerializer(command)
#             #serializer.serialize("json", command, ignorenonexistent=True)
#             #return Response(serializer.data,status=status.HTTP_201_CREATED)
#         else:
#             #empty 
#             return HttpResponse("placeholder")
#     else: 
#         return HttpResponse("error handling")    