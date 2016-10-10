from fractions import *
    
while True:
    try:
        num,dem = map(int,input().split())
    except EOFError:
        exit()
    
    g = gcd(num, dem)
    num //= g
    dem //= g
    print("[%d;" % (num // dem), end = "")
    num %= dem;

    while num != 1:
        num,dem = dem,num
        print("%d," % (num // dem), end = "")
        num %= dem
    print("%d]" % dem)
