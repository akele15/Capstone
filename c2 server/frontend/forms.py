from django.contrib.auth.models import User
from django import forms
from api.models import *
from django.contrib.auth.forms import UserCreationForm
class UserForm(forms.ModelForm):
	class Meta:
		model = User
		fields = ['username', 'password']
		widgets ={
			'password': forms.PasswordInput()
		}
class RegisterForm(forms.Form):
	invite_code= forms.CharField(max_length=15)
	username=forms.CharField(max_length=30)
	password = forms.CharField(widget=forms.PasswordInput)
	confirm_password= forms.CharField(widget=forms.PasswordInput)

class ShellCommandForm(forms.Form):
	action_type =forms.CharField(widget=forms.Select(choices=UserActionLog.CommandTypeEnumChoice),required=False)
	command =  forms.CharField(widget=forms.Textarea)
	prefix= 'command'
class FileTransferForm(forms.Form):
	direction = forms.CharField(widget=forms.Select(choices=FileTransferLog.DirectionTypeEnumChoice))
	file_to_upload = forms.FileField(required=False)
	path_to_file = forms.CharField(required=False)
	filename= forms.CharField(required=False)
	prefix= 'files'