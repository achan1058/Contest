from fractions import Fraction

T = int(input())
for X in range(T):
    f = Fraction(input().replace(" ", ""))
    print("%d / %d" % (f.numerator, f.denominator))
