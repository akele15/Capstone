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
  




