N = int(input())
for X in range(0, N):
	a,b = input().split()
	ans = int(a[::-1]) + int(b[::-1])
	print(int(str(ans)[::-1]))