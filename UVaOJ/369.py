import math

while True:
    n,k = map(int, input().split())
    if n == 0 and k == 0:
        exit()

    print("%d things taken %d at a time is %d exactly." % (n, k, math.factorial(n) // math.factorial(k) // math.factorial(n - k)));
