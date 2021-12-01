from django.urls import path
from . import views
from django.contrib.auth.views import LoginView,LogoutView
from frontend.views import *
from django.contrib.auth import views as auth_views
urlpatterns = [
    path('', views.user_login, name='login'),
    path('invitecode/', InviteCodeView.as_view(), name="InviteCodeView"),
    path('login/', views.user_login, name='login'),
    path('register/', views.user_register, name='register'),
    path('agent/<int:agent_id>/', views.agent, name='agent'),
    path('agentselect/', views.agentselect, name='agentselect'),
    path('logout/', LogoutView.as_view(), {'next_page': 'login'}, name='logout'),
    path('output/', views.output, name='output'),
    path('ViewFileTransfer/', views.ViewFileTransfer, name='ViewFileTransfer'),
    path('DownloadFiles/<int:file_log_id>/', views.DownloadFiles, name='DownloadFiles'),
]