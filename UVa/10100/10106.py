while True:
	try:
		n = int(input())
		m = int(input())
	except EOFError:
		exit()
	print(n * m)
