from django.db import models
from django.utils import timezone
from django.contrib.auth.models import User # new
from enum import Enum, auto
# Create your models here.
#blank=True 
class Agent(models.Model):
    name= models.CharField(max_length=100)
    LastCheckinDate= models.DateTimeField(default=timezone.now)
    def __str__(self):
        return self.name

class InviteCode(models.Model):
    Code = models.CharField(max_length=15)

# class DirectionTypeEnum(Enum):
#     Upload = auto()
#     Download = auto()

class FileTransferLog(models.Model):
    User= models.ForeignKey(User, on_delete=models.PROTECT)
    FileName = models.CharField(max_length=255)
    Time= models.DateTimeField(default=timezone.now)
    Hash =models.CharField(max_length=64)
    File=models.FileField(null=True)
    DirectionTypeEnumChoice=(
        ('Upload', 'Upload'),
        ('Download', 'Download')
    )
    direction= models.CharField(choices=DirectionTypeEnumChoice,max_length=255)
    Path= models.TextField(null=True)



# class CommandTypeEnum(Enum):
#     FileTransfer = auto()
#     ShellCommand = auto()

class UserActionLog(models.Model):
    User= models.ForeignKey(User, on_delete=models.PROTECT)
    Command = models.TextField()
    Output = models.TextField()
    Date = models.DateTimeField(default=timezone.now)
    CommandTypeEnumChoice=(
        ('FileTransfer','FileTransfer'),
        ('ShellCommand','ShellCommand')
    )
    CommandType = models.CharField(choices=CommandTypeEnumChoice,max_length=255)
    TransferLog= models.ForeignKey(FileTransferLog, on_delete=models.PROTECT,null=True,blank=True)
    Agent= models.ForeignKey(Agent,on_delete=models.PROTECT )
    Queued = models.BooleanField(default=True)





# class command(models.Model)
#     body=models.CharField(max_length=250)
#     Agent= models.ForeignKey(
#         Agent, on_delete=models.CASCADE, default=1, related_name="agent"
#     )
    