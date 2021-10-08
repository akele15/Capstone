import pytest
import json
from frontend.views import *
import requests
from api.models import *
from django.test import RequestFactory,Client
from django.urls import reverse
@pytest.fixture
def test_user():
    return User.objects.create_user('john', 'lennon@thebeatles.com', 'johnpassword')
@pytest.fixture
def create_invite():
    aCode=InviteCode()
    aCode.Code="1234"
    return aCode.save()

# invite tests

#@pytest.mark.django_db
def test_invite_unauth():
    client =Client()
    response = client.get(reverse("InviteCodeView"))
    assert response.status_code == 302
@pytest.mark.django_db
def test_invite_user():
    user = User.objects.create_user(username="name", password="password")
    client =Client()
    client.force_login(user)
    response = client.get(reverse("InviteCodeView"))
    assert response.status_code == 302

@pytest.mark.django_db
def test_invite_admin():
    user = User.objects.create_user(username="name", password="password",is_superuser=True)
    client =Client()
    client.force_login(user)
    response = client.get(reverse("InviteCodeView"))
    assert response.status_code == 200
@pytest.mark.django_db
def test_login_get():
    client=Client()
    response = client.get(reverse("login"))
    assert response.status_code == 200
@pytest.mark.django_db
def test_login_wrong():
    data= {"csrfmiddlewaretoken": "",'username':'wrong', 'password':'creds','next':""}
    #client=Client()
    req = RequestFactory().post(reverse("login"), data=data)
    response = user_login(req)
    #response = client.post(reverse(post),data=data)
    #response.render()
    assert response.status_code ==302
    assert response.url == "/login"

# @pytest.mark.django_db
# def test_login_correct(test_user):
#     data= {'username':'john', 'password':'johnpassword','next':""}
#     req = RequestFactory().post(reverse("login"), data=data)
#     response = user_login(req)
#     assert response.content ==200
#     assert response.content == "valid"

@pytest.mark.django_db
def test_login_correct(test_user,client):
    data= {'username':'john', 'password':'johnpassword','next':""}
    response= client.post("/login/",data)
    user=User.objects.first()
    assert response.status_code ==200
    assert User.objects.all().count()==1

# Register
@pytest.mark.django_db
def test_register_no_invite(client):
    data={
        'invite_code':'',
        'username':"wrong",
        'password':"pass1",
        'confirm_password': 'pass2'
    }
    response= client.post("/register/", data)
    assert response.status_code ==200
    assert response.content == b'Please wait for the admin to finish setting up'
@pytest.mark.django_db
def test_register_pass_mismatch(create_invite,client):
    data={
        'invite_code':'1234',
        'username':"wrong",
        'password':"pass1",
        'confirm_password': 'pass2'
    }
    response= client.post("/register/", data)
    assert response.status_code ==302
    assert response.url == "/register"


@pytest.mark.django_db
def test_register_wrong_invite(create_invite,client):
    data={
        'invite_code':'1asd234',
        'username':"user",
        'password':"pass1",
        'confirm_password': 'pass1'
    }
    response= client.post("/register/", data)
    assert response.status_code ==302
    assert response.url == "/register"

@pytest.mark.django_db
def test_register_mismatch(create_invite,client):
    #print(InviteCode.objects.last().Code)
    form_data={
        "invite_code":"1234",
        "username":"user5",
        "password":"password",
        "confirm_password":"mismatch"
    }
    response= client.post("/register/", form_data)
    assert response.status_code ==302

@pytest.mark.django_db
def test_register_correct(create_invite,client):
    #print(InviteCode.objects.last().Code)
    form_data={
        "invite_code":"1234",
        "username":"user5",
        "password":"password",
        "confirm_password":"password"
    }
    response= client.post("/register/", form_data,follow=True)
    assert response.status_code ==200
    assert response.content ==b'registered'
    





    #assert response.content ==''




    #client.force_login(user)
    #assert False is Agent.objects.all().exists()
    #req = RequestFactory().get(reverse("InviteCodeView"))
    #req.force_login(user)
    #resp = RegisterAgent.as_view()(req)
    #assert resp.status_code == 405