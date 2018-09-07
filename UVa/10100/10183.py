from bisect import *

fib = [1, 2]
while fib[-1] < 10**100:
	fib.append(fib[-1] + fib[-2])
while True:
	small,big = map(int,input().split())
	if (small | big) == 0:
		exit()

	print(bisect_right(fib, big) - bisect_left(fib, small))
