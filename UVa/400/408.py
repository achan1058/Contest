from fractions import *

while True:
    try:
        n,m = map(int,input().split())
    except EOFError:
        exit()
        
    if gcd(n, m) == 1:
        print("%10d%10d    Good Choice\n" % (n, m));
    else:
        print("%10d%10d    Bad Choice\n" % (n, m));
    