import pytest
import requests


def get_response(*args, **kwargs):
    return requests.get(f"http://localhost:{5000}/" + '/'.join(map(str, args)))


def get_response_mock(*args, **kwargs):
    return requests.get(f"http://localhost:{5001}/" + '/'.join(map(str, args)))

class TestUsingPytestMock:
    @staticmethod
    @pytest.mark.parametrize('a, b', [
        [1, 2],
        [4, 5],
        [4, 4],
        [4, 3],
        [4, 3],
    ])
    def test_sum(mocker, a, b):
        mocker.patch('requests.get', return_value=a + b)
        assert get_response('sum', a, b) == f"<h1>{a} + {b} = {a + b}</h1>"


class TestUsingMockServer:
    @staticmethod
    @pytest.mark.parametrize('a, b, code', [
        [1, 2, 200],
        [4, 5, 200],
        [4, 4, 200],
        [4, 3, 200],
        ['a', 'a', 404],
        [4, 'a', 404],
        [4, 'a', 403],
    ])
    def test_get_sum(a, b, code):
        response = get_response_mock('sum', a, b)
        if code == 200:
            assert response.status_code == 200
            assert response.text == f"<h1>{a} + {b} = {a + b}</h1>"
        elif code == 404:
            assert response.status_code == 404
        else:
            assert False

#-----------------


def get_sum():
    a = int(input())
    b = int(input())
    return a + b


@pytest.fixture
def simple_fixture():
    return 1

def test_simple_fixture(simple_fixture):
    assert simple_fixture == 1


@pytest.mark.parametrize('a, b', [
    [1, 2],
    [-1, -2],
    [0, 0],
])
def test_simple_sum(monkeypatch, a, b):
    text = map(str, [a, b])
    monkeypatch.setattr('builtins.input', iter(text).__next__)
    assert get_sum() == a + b