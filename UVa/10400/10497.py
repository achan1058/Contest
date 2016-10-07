while True:
    n = int(input())
    if n == -1:
        exit()

    ans = 0
    cur = 1
    for i in range(n, -1, -1):
        ans += cur
        cur *= -i

    print(abs(ans))
    