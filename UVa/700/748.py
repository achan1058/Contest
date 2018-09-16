from decimal import *
    
while True:
	try:
		n,p = input().split()
	except EOFError:
		exit()

	getcontext().prec = 10000
	output = '{0:.10000f}'.format(pow(Decimal(n),int(p))).strip('0').rstrip('0')
	print(output)
