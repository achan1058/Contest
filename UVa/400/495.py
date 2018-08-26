a = [0] * 5001
a[1] = 1
for i in range(2, 5001):
	a[i] = a[i - 1] + a[i - 2]

while True:
	try:
		n = int(input())
	except EOFError:
		exit()

	print("The Fibonacci number for %d is %s" % (n, a[n]))
