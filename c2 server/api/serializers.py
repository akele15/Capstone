from rest_framework import serializers
from .models import *
from django.utils import timezone

class AgentSerializer(serializers.ModelSerializer):
    class Meta:
        model= Agent
        fields='__all__'

class InviteCodeSerializer(serializers.ModelSerializer):
    class Meta:
        model= InviteCode
        fields= '__all__'
class FileTransferLogSerializer(serializers.ModelSerializer):
    class Meta:
        model= FileTransferLog
        fields='__all__'  
class UserActionLogSerializer(serializers.ModelSerializer):
    TransferLog = FileTransferLogSerializer(many=False)
    class Meta:
        model= UserActionLog
        fields='__all__'  
        #("id","Command","Output","CommandType","Queued","User","TransferLog","Agent")
  




# class WorkspaceSerializer(serializers.ModelSerializer):

#     def create(self, validated_data):
 
#         request = self.context
#         space = Workspace()
#         space.owner= request.user
#         space.name=validated_data['name']
#         space.save()
#         return space 

#     class Meta:
#         fields = (
#             'id',
#             'name',
#             'created',
#             'owner',
#         )
#         model = Workspace
#         extra_kwargs = {'owner': {'required': False}}



# class BoardSerializer(serializers.ModelSerializer):

#     def create(self, validated_data):
#         request = self.context
#         board = Board()
#         ws = Workspace.objects.get(id=validated_data['workspaceid'])
#         board.workspace = ws
#         board.title= validated_data['title']
#         board.description = validated_data['description']
#         # so there's an 99 percent chance this causes the warning pasted below
#         #DateTimeField Board.created received a naive datetime (2021-07-12 16:20:39.877687) while time zone support is active. warnings.warn("DateTimeField %s received a naive datetime (%s)"
#         # I however don't feel like dealing with that at the moment
#         board.created= datetime.datetime.now()
#         board.save()
#         return board

#     class Meta:
#         fields = (
#             'id',
#             'title',
#             'description',
#             'created',
#         )
#         model = Board