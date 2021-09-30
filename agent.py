import getpass
import socket
import json
import requests
import base64
import datetime
# variables that should be changed
# date in yyyy/mm/dd format
killdate= datetime.datetime(2021,9,14)
ServerUrl="http://localhost:8000/"

#derive agent name
AgentName= getpass.getuser()+"@" + socket.gethostname()
print(AgentName)
def checkDate(aKilldate):
    if(datetime.datetime.now() > aKilldate):
        exit()
def register(aName):
    data = {"name" : aName}
    data_json = json.dumps(data)
    headers = {'Content-type': 'application/json'}
    response = requests.post(ServerUrl+"api/register/", data=data_json, headers=headers)
    return response.json()
def fake():
    if(true):
        return True
    else:
        return False
# this is when we register
#response = requests.get("https://192.168.150.111/api/v1/vmware/vm?name="+vmname, auth=auth_values, verify=False)
# data = {"name" : AgentName}
# data_json = json.dumps(data)
# headers = {'Content-type': 'application/json'}
# # response = requests.post(ServerUrl+"api/register/", data=data_json, headers=headers)
# print(response.json())
