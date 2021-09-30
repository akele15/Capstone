from django import forms
from django.contrib.auth.models import User
from django.contrib.auth.forms import UserCreationForm
 
class Register(UserCreationForm):
    Invite= forms.CharField()
    class Meta:
        model =User
        fields =['username']

