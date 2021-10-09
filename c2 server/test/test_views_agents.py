import pytest
import json
from api.views import *
import requests
from api.models import *
from django.test import RequestFactory
from django.urls import reverse
@pytest.fixture
def test_agent():
    agent=Agent()
    agent.name="test user"
    agent.save()
@pytest.fixture
def test_user():
    return User.objects.create_user('john', 'lennon@thebeatles.com', 'johnpassword')

# @pytest.mark.django_db
# def test_create_agent():
#     headers = {'Content-type': 'application/json'}
#     data = json.dumps({"name" : "aName"})
#     x = requests.post('http://127.0.0.1:8000/api/register/',data=data, headers=headers)
#     assert Agent.objects.count()==1
#     assert x.status_code == 201
#     print (x.json())
#     #assert x.response== json.dumps()
@pytest.mark.django_db
def test_create_agent():
    #assert False is Agent.objects.all().exists()
    data = {"name" : "aName"}
    req = RequestFactory().post(reverse("RegisterAgent"), data=data)
    resp = RegisterAgent.as_view()(req)
    assert resp.status_code == 201, "Should redirect to success url"
    assert Agent.objects.all().exists()
    assert Agent.objects.all()[0].name == "aName"
@pytest.mark.django_db  
def test_create_agent_bad_data():
    #assert False is Agent.objects.all().exists()
    data = {"bad" : "data"}
    req = RequestFactory().post(reverse("RegisterAgent"), data=data)
    resp = RegisterAgent.as_view()(req)
    assert resp.status_code == 400, "Should redirect to success url"
    assert False is Agent.objects.all().exists()
    assert Agent.objects.count() == 0

# tests for checkin view 
@pytest.mark.django_db  
def test_checkin_no_agent(client):
    response= client.get("/api/checkin/3", follow=True)
    assert response.status_code== 404
@pytest.mark.django_db  
def test_checkin_no_command(client,test_agent):
    id=Agent.objects.first().id
    response= client.get("/api/checkin/"+str(id), follow=True)
    assert response.status_code ==204
@pytest.mark.django_db  
def test_checkin_command(client,test_agent,test_user):
    id=Agent.objects.first().id
    log= UserActionLog(
        User= User.objects.first(),
        Command = "ls -al",
        CommandType ='ShellCommand',
        Agent= Agent.objects.first(),
        Queued = True,
    )
    log.save()
    response= client.get("/api/checkin/"+str(id), follow=True)
    assert response.status_code == 200
    assert 'ls -al' in str(response.content)


# @pytest.mark.django_db  
# def test_checkin_agent_No_command(c):
