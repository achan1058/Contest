a = [0] * 300
a[0] = 1
quit = False
for n in range(300):
	for i in range(n, 0, -1):
		a[i] += a[i - 1]
		print(a[i], end=" ")
		if len(str(a[i])) > 60:
			quit = True
	print(1)
	if quit:
		exit()
