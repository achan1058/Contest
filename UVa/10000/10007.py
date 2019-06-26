from math import *

while True:
	n = int(input())
	if n == 0:
		exit()

	print(factorial(2 * n) // factorial(n + 1))
