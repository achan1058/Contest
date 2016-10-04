n = int(input())

for x in range(0, n):
    a,b = input().split()
    ans = int(a[::-1]) + int(b[::-1])
    ans = int(str(ans)[::-1])
    print(ans)