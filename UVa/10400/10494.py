while True:
	try:
		n1,c,n2 = input().split()
	except EOFError:
		exit()
	if (c == "/"):
		print(int(n1) // int(n2))
	else:
		print(int(n1) % int(n2))
