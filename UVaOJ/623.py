import math
    
while True:
    try:
        n = int(input())
    except EOFError:
        exit()
    
    print("%d!\n%d" % (n, math.factorial(n)))
