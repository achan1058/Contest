from math import *
    
while True:
	try:
		n = int(input())
	except EOFError:
		exit()
	print("%d!\n%d" % (n, factorial(n)))
