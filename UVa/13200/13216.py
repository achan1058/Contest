N = int(input())

for X in range(N):
	try:
		n = int(input())
	except EOFError:
		exit()
	print(pow(66, n, 100))
