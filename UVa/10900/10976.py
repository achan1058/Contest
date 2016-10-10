from fractions import *

while True:
    try:
        n = int(input())
    except EOFError:
        exit()

    f = Fraction(1, n)
    v1 = []
    v2 = []
    for i in range(n):
        f1 = Fraction(1, i + n + 1)
        f2 = f - f1

        if f2.numerator == 1:
            v1.append(f2)
            v2.append(f1)
            
    print(len(v1));
    for i in range(len(v1)):
        print("1/%d = 1/%d + 1/%d" % (n, v1[i].denominator, v2[i].denominator))
