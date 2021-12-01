import pytest
#import pytest.fixtures
import datetime
from django.contrib.auth.models import User
from api.models import *
from django.utils import timezone
# fixtures 
@pytest.fixture
def test_user():
    return User.objects.create_user('john', 'lennon@thebeatles.com', 'johnpassword')

@pytest.fixture
def create_file_log():
    aLog= FileTransferLog()
    aLog.User= User.objects.first()
    aLog.FileName="A file name"
    aLog.Time= timezone.now()
    aLog.Hash="daffadfadf"
    aLog.direction="Upload"
    aLog.save()
@pytest.fixture
def create_agent():
    anAgent=Agent()
    anAgent.name= "aName"
    anAgent.LastCheckinDate= timezone.now()
    anAgent.save()
# tests

@pytest.mark.django_db
def test_InviteCode_create():
    aCode= InviteCode()
    aCode.Code="dadadfadfadfa"
    aCode.save()
    assert InviteCode.objects.count()==1

@pytest.mark.django_db
def test_FileTransferLog_create(test_user):
    aLog= FileTransferLog()
    aLog.User= User.objects.first()
    aLog.FileName="A file name"
    aLog.Time= timezone.now()
    aLog.Hash="daffadfadf"
    aLog.direction="Upload"
    aLog.save()
    assert FileTransferLog.objects.count()==1


@pytest.mark.django_db
def test_agent_create():
    anAgent=Agent()
    anAgent.name= "aName"
    anAgent.LastCheckinDate= timezone.now()
    anAgent.save()
    assert Agent.objects.count()==1

@pytest.mark.django_db
def test_UserActionLog_create(test_user,create_file_log,create_agent):
    action_log= UserActionLog()
    action_log.User= User.objects.first()
    action_log.Output= "this is the ouput of a commands"
    action_log.CommandType="FileTransfer"
    action_log.TransferLog=FileTransferLog.objects.first()
    action_log.Agent= Agent.objects.first()
    action_log.Queued=True
    action_log.save()
    assert UserActionLog.objects.count()==1

#@pytest.mark.django_db
# def test_InviteCode_create():
#@pytest.mark.django_db
## def test_InviteCode_create():

# def test_InviteCode_create():    