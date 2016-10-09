N = int(input())
mod = 1000000007
for X in range (N):
    n = int(input())
    n *= pow(2, n - 1, mod)
    n %= mod
    print("Case #%d: %d" % (X + 1, n));
    