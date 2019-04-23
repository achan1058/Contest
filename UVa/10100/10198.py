arr = [0] * 1001
arr[0] = 1
arr[1] = 2
arr[2] = 5
for i in range(3, 1001):
	arr[i] = 2 * arr[i - 1] + arr[i - 2] + arr[i - 3];

while True:
	try:
		n = int(input())
	except EOFError:
		exit()
	print(arr[n])
