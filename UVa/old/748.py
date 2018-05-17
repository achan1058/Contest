from decimal import *
    
while True:
    try:
        n,p = input().split()
    except EOFError:
        exit()
    
    getcontext().prec = 10000
    output = '{0:.10000f}'.format(pow(Decimal(n),int(p)))
    while output[-1] == '0':
        output = output[:-1]
    while output[0] == '0':
        output = output[1:]
    print(output)
