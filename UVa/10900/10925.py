X = 0
while True:
    X += 1
    n, m = map(int, input().split())
    total = 0
    if n == 0 and m == 0:
        exit()
    for i in range(0, n):
        total += int(input())
    print("Bill #%d costs %d: each friend should pay %d\n" % (X, total, total // m))
