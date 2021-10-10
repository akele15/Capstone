import pytest

@pytest.fixture
def test_user():
    return User.objects.create_user('john', 'lennon@thebeatles.com', 'johnpassword')
