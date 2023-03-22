import pytest
from branchy_sum import branchy_sum
from very_branchy_sum import very_branchy_sum


@pytest.mark.parametrize('a', [-1])
@pytest.mark.parametrize('b', [-1, 0, 1])
def test_branchy_sum(a, b):
    assert branchy_sum(a, b) == a + b


@pytest.mark.parametrize('a', [-1, 0, 1])
@pytest.mark.parametrize('b', [-1, 0, 1])
def test_very_branchy_sum(a, b):
    assert very_branchy_sum(a, b) == a + b
