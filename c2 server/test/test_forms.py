import pytest
from frontend.forms import *

def test_register_valid_data():
    form = RegisterForm({
        "username":"user5",
        "password":"password",
        "confirm_password":"password",
        "invite_code":"1234",
    })
    assert(form.is_valid())
