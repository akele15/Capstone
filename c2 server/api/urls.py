from django.contrib import admin
from django.urls import path
from . import views
urlpatterns = [
    # path('admin/', admin.site.urls),
    path('register/', views.RegisterAgent.as_view(), name="RegisterAgent"),
    #path('checkin/<int:agent_id>/', views.checkin2, name='checkin'),
    path('checkin/<int:agent_id>/', views.checkin.as_view(), name='checkin'),
    path('agentreportoutput/',views.AgentReportOutput,name='AgentReportOutput')
]
