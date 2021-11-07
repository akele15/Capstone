import pytest
from unittest.mock import patch
from agent import *
from datetime import datetime, timedelta
import json, tempfile,pathlib,os

# @pytest.fixture(scope='session')
# def small_image(tmp_path_factory):
#     img = tmp_path_factory.getbasetemp() / 'sample_image_small.tif'
#     img.write_bytes(b'Hello world')
#     return img

def test_checkDate_after_KD():
    with pytest.raises(SystemExit):
        checkDate(datetime.today() - timedelta(days=1))
def test_register_success():
    with patch('requests.post') as mock_request:
        aname='test'
        mock_request.return_value.status_code = 201
        mock_request.return_value.json.return_value = {'id':89, 'name':aname}
        assert(register(aname)==89)
def test_register_wrong_status():
    with patch('requests.post') as mock_request:
        aname='test'
        mock_request.return_value.status_code = 404
        mock_request.return_value.json.return_value = {'id':89, 'name':aname}
        assert(register(aname)==-1)
def test_get_command():
    with patch('requests.get') as mock_request:
        aname='test'
        # status code of not 200 is assumed to be empty
        mock_request.return_value.status_code = 201
        mock_request.return_value.json.return_value = {'id':89, 'name':aname}
        assert(get_command(1)=='{}')
def test_get_command():
    with patch('requests.get') as mock_request:
        aname='test'
        # status code of not 200 is assumed to be empty
        mock_request.return_value.status_code = 200
        mock_request.return_value.json.return_value = {'id':89, 'command':"test command"}
        assert(get_command(1)==mock_request.return_value.json.return_value)
def test_execute_command_shell():
    null = None
    data= """{"id": 10,
    "TransferLog": null,
    "Command": "echo 'test output'",
    "Output": "",
    "Date": "2021-11-07T12:45:49.619307Z",
    "CommandType": "ShellCommand",
    "Queued": false,
    "User": 1,
    "Agent": 1}"""
    json_data=json.loads(data)
    assert(execute_command(json_data)==b"'test output'\n")
def test_execute_file_download_failed():
    null = None
    data= """{
    "id": 11,
    "TransferLog": {
        "id": 4,
        "FileName": "file that doesn't exist",
        "Time": "2021-11-07T13:14:05.122054Z",
        "Hash": "",
        "File": null,
        "direction": "Download",
        "Path": "directory/that doesnt exist",
        "User": 1
    },
    "Command": "",
    "Output": "",
    "Date": "2021-11-07T13:14:10.169472Z",
    "CommandType": "FileTransfer",
    "Queued": false,
    "User": 1,
    "Agent": 1}"""
    json_data=json.loads(data)
    assert(execute_command(json_data)=='Failed')
def test_execute_file_download_sucess():
    null = None
    data= """{
    "id": 11,
    "TransferLog": {
        "id": 4,
        "FileName": "file that doesn't exist",
        "Time": "2021-11-07T13:14:05.122054Z",
        "Hash": "",
        "File": null,
        "direction": "Download",
        "Path": "directory/that doesnt exist",
        "User": 1
    },
    "Command": "",
    "Output": "",
    "Date": "2021-11-07T13:14:10.169472Z",
    "CommandType": "FileTransfer",
    "Queued": false,
    "User": 1,
    "Agent": 1}"""
    json_data=json.loads(data)
    with patch('agent.Upload_file') as mock_download:
        mock_download=True
        assert(execute_command(json_data)=='Success')
def test_execute_file_upload_sucess():
    data="""{
    "id": 12,
    "TransferLog": {
        "id": 5,
        "FileName": "0001-0120.gif",
        "Time": "2021-11-07T14:32:57.467069Z",
        "Hash": "84f8fab61126c7cbaa200998ab48dc99d3d1e2f1bc71830a41906a66d832a3c1",
        "File": "/0001-0120.gif",
        "direction": "Upload",
        "Path": null,
        "User": 1
    },
    "Command": "",
    "Output": "",
    "Date": "2021-11-07T14:33:27.534192Z",
    "CommandType": "FileTransfer",
    "Queued": false,
    "User": 1,
    "Agent": 1}"""
    json_data=json.loads(data)
    with patch('agent.download_file') as mock_download:
        assert(execute_command(json_data)=='Success')
def test_execute_file_upload_failure():
    data="""{
    "id": 12,
    "TransferLog": {
        "id": 5,
        "FileName": "0001-0120.gif",
        "Time": "2021-11-07T14:32:57.467069Z",
        "Hash": "84f8fab61126c7cbaa200998ab48dc99d3d1e2f1bc71830a41906a66d832a3c1",
        "File": "/does not exist",
        "direction": "Upload",
        "Path": null,
        "User": 1
    },
    "Command": "",
    "Output": "",
    "Date": "2021-11-07T14:33:27.534192Z",
    "CommandType": "FileTransfer",
    "Queued": false,
    "User": 1,
    "Agent": 1}"""
    json_data=json.loads(data)
    with patch('agent.download_file') as mock_download:
        mock_download.side_effect=Exception('Test')
        assert(execute_command(json_data)=='Failed')

def test_download_file():
    with patch('requests.get') as mock_download:
        mock_download.iter_content="hello word"
        download_file(1,"test.file")
def test_upload_file():
    with patch('requests.post') as mock_upload:
        fo = tempfile.NamedTemporaryFile()
        path=fo.name
        with patch("builtins.open") as mock_file:
            mock_upload.status_code=201
            mock_file=fo
            Upload_file(1,"test.test",path)
def test_report_output():
    with patch('requests.post') as mock_post:
        mock_post.status_code=200
        report_output("output",1)