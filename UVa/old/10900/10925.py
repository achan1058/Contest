X = 0
while True:
    X += 1
    n, m = map(int, input().split())
    if n == 0 and m == 0:
        exit()
    total = 0
    for i in range(n):
        total += int(input())
    print("Bill #%d costs %d: each friend should pay %d\n" % (X, total, total // m))
