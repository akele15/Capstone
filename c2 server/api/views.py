from django.shortcuts import render
from rest_framework.views import APIView
from .models import Agent
from .serializers import AgentSerializer
from rest_framework.response import Response
from rest_framework import status
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
        