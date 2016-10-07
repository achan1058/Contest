while True:
    line = input().split()
    b = int(line[0])
    if b == 0:
        exit()
    
    p = int(line[1], b)
    m = int(line[2], b)
    r = p % m

    ans = 0
    inc = 1
    while r > 0:
        ans += (r % b) * inc
        inc *= 10
        r //= b

    print(ans)
