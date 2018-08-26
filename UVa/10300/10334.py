a = [0] * 1001
a[0] = 1
a[1] = 2
for i in range(2, 1001):
	a[i] = a[i - 1] + a[i - 2]

while True:
	try:
		n = int(input())
	except EOFError:
		exit()

	print(a[n])
