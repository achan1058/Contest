from math import *

while True:
    try:
        n,r = map(int,input().split())
    except EOFError:
        exit()

    values = map(int,input().split())
    ans = factorial(n)
    for v in values:
        ans //= factorial(v)
    print(ans)
