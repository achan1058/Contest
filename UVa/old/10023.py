def findsq(y, v1):
    v2 = 0;
    while v1 != v2:
        v2 = (v1 + y // v1) // 2
        v1,v2 = v2,v1
    return v1


n = int(input())
for x in range(0, n):
    y = input()
    y = input()
    init = int(y[:len(y) - len(y) // 2])
    y = int(y)
    if x > 0:
        print()
    print(findsq(y, init))
