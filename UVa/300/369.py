from math import factorial

while True:
    n,k = map(int, input().split())
    if n == 0 and k == 0:
        exit()

    print("%d things taken %d at a time is %d exactly." % (n, k, factorial(n) // factorial(k) // factorial(n - k)));
