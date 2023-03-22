def very_branchy_sum(a: int, b: int):
    if a > 0 and b > 0:
        return a + b
    else:
        if a < 0:
            return a + b
        elif b < 0:
            return a + b
        else:
            if a == 0:
                return b
            elif b == 0:
                return a
            else:
                return 0
