from django.contrib import admin
from django.urls import path
from . import views
urlpatterns = [
    # path('admin/', admin.site.urls),
    path('register/', views.RegisterAgent.as_view(), name="RegisterAgent"),
]
