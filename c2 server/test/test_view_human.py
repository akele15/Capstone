import pytest
import json
from api.views import *
import requests
from api.models import *
from django.test import RequestFactory,Client
from django.urls import reverse
#@pytest.mark.django_db
def test_invite_unauth():
    #assert False is Agent.objects.all().exists()
    req = RequestFactory().get(reverse("InviteCodeView"))
    resp = RegisterAgent.as_view()(req)
    assert resp.status_code == 405
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

    #assert response.content ==''




    #client.force_login(user)
    #assert False is Agent.objects.all().exists()
    #req = RequestFactory().get(reverse("InviteCodeView"))
    #req.force_login(user)
    #resp = RegisterAgent.as_view()(req)
    #assert resp.status_code == 405