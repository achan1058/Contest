X = 1
while True:
    n,f = map(int,input().split())
    if n == 0 and f == 0:
        exit()
    total = 0
    for i in range(n):
        total += int(input())

    print("Bill #%d costs %d: each friend should pay %d\n" % (X, total, total // f))
    X += 1
