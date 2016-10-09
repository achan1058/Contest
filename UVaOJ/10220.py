from math import *

while True:
    try:
        n = int(input())
    except EOFError:
        exit()

    s = str(factorial(n))
    ans = 0
    for c in s:
        ans += int(c)

    print(ans)

