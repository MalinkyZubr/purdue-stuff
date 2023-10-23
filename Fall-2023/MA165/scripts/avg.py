import math


def avg_roc(func, start, end):
    return (func(end) - func(start)) / (end - start)

def value_approximator(func, x_1, x_2):
    return (func(x_1) + func(x_2)) / 2

func = lambda x: math.log(1 + x, math.e) / x

intervals = [
]

def compute_set(intervals):
    for start, end in intervals:
        print(avg_roc(func, start, end))


print(avg_roc(func, 0.9999, 1.0001))
print(value_approximator(func, -0.0001, 0.0001))