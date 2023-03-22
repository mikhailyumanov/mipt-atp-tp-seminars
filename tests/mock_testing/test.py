import pytest
import requests


def get_response(*args, **kwargs):
    return requests.get(f"http://localhost:{5000}/" + '/'.join(map(str, args)))


def get_response_mock(*args, **kwargs):
    return requests.get(f"http://localhost:{5001}/" + '/'.join(map(str, args)))


class TestUsingPytestMock:
    @staticmethod
    @pytest.mark.parametrize('a, b, ans', [
        [1, 2, 3],
        [4, 5, 9],
        [4, 4, 8],
        [4, 3, 7],
    ])
    def test_sum(mocker, a, b, ans):
        mocker.patch('requests.get', return_value=a + b)
        assert get_response('sum', a, b) == ans


class TestUsingMockServer:
    @staticmethod
    @pytest.mark.parametrize('a, b, ans', [
        [1, 2, 3],
        [4, 5, 9],
        [4, 4, 8],
        [4, 3, 7],
    ])
    def test_get_sum(a, b, ans):
        assert get_response_mock('sum', a, b).text == str(ans)


#-----------------


def get_sum():
    a = int(input())
    b = int(input())
    return a + b


@pytest.mark.parametrize('a, b', [
    [1, 2],
    [-1, -2],
    [0, 0],
])
def test_simple_sum(monkeypatch, a, b):
    text = map(str, [a, b])
    monkeypatch.setattr('builtins.input', iter(text).__next__)
    assert get_sum() == a + b