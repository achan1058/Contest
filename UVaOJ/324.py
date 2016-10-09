from math import *

while True:
    n = int(input())
    if n == 0:
        exit()
    f = str(factorial(n))

    print("%d! --" % n)
    for i in range(0, 10):
        print("   (%d)%5d" % (i, f.count(str(i))), end="")

        if i % 5 == 4:
            print()
        else:
            print(" ", end="")
