while True:
    try:
        n,a = map(int,input().split())
    except EOFError:
        exit()

    ans = 0
    for i in range(1, n + 1):
        ans += i * a**i

    print(ans)
