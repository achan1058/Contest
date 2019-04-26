a = [0] * 1500
b = [0] * 1501
X = 1
a[0] = a[1] = 1
for i in range(2, 1500):
	a[i] = a[i - 1] + a[i - 2]
for i in range(1, 1500):
	b[i + 1] = b[i] + a[i]
	
while True:
	n = int(input())
	if n == 0:
		exit()

	print("Set %d:\n%d" % (X, (b[n] + b[n - 1] + 1) // 2))
	X += 1
