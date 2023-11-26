#!/usr/bin/python3
import sys


def prime_factors(n):
    if n % 2 == 0:
        return 2, n // 2
    i = 2
    while n % i:
        if i <= n:
            i += 1
        else:
            return 1, n
    return n, n // i

with open(sys.argv[1]) as file:
    for number in file:
        n = int(number)
        f1, f2 = prime_factors(n)
        print(f"{n}={f1}*{f2}")
