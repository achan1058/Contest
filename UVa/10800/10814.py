import fractions

T = int(input())
for X in range(T):
    f = fractions.Fraction(input().replace(" ", ""))
    print("%d / %d" % (f.numerator, f.denominator))
