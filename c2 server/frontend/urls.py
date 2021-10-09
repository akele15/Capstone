from django.urls import path
from . import views
from django.contrib.auth.views import LoginView,LogoutView
from frontend.views import *
from django.contrib.auth import views as auth_views
urlpatterns = [
    path('invitecode/', InviteCodeView.as_view(), name="InviteCodeView"),
    path('login/', views.user_login, name='login'),
    path('register/', views.user_register, name='register'),
    path('agent/<int:agent_id>/', views.agent, name='agent'),
    path('logout/', LogoutView.as_view(), {'next_page': 'login'}, name='logout'),
    # path('',views.indexView,name="home"),
    # # path('dashboard/',views.dashboardView,name="dashboard"),
    # path('login/',LoginView.as_view(),name="login_url"),
    # path('register/',views.registerView,name="register_url"),
    # path('logout/',LogoutView.as_view(next_page='dashboard'),name="logout"),
]