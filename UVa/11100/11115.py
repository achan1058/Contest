while True:
	n, d = map(int, input().split())
	if n == 0 and d == 0:
		exit()
	print(n**d)
