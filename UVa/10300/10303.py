from math import *

while True:
	try:
		n = int(input())
	except EOFError:
		exit()

	print(factorial(2 * n) // factorial(n) // factorial(n) // (n + 1))
