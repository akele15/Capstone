import pytest
from unittest.mock import patch
from agent import checkDate,register
from datetime import datetime, timedelta
def test_checkDate_after_KD():
    with pytest.raises(SystemExit):
        checkDate(datetime.today() - timedelta(days=1))
def test_register():
    with patch('requests.post') as mock_request:
        aname='test'
        mock_request.return_value.status_code = 200
        mock_request.return_value.json.return_value = {'id':1, 'name':aname}
        assert(register(aname)=={'id':1, 'name':'test'})