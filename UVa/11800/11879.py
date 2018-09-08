while True:
	n = int(input())
	if n == 0:
		exit()
	print(0 if n % 17 else 1)
