import math

while True:
    try:
        n,r = map(int,input().split())
    except EOFError:
        exit()

    values = map(int,input().split())
    ans = math.factorial(n)
    for v in values:
        ans //= math.factorial(v)
    print(ans)
