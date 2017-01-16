from fractions import *

top_heavy = 0;
frac = Fraction(1)
for n in range(1000):
    frac = 1 + 1 / (1 + frac)
    topstring = frac.numerator
    botstring = frac.denominator

    if (len(str(topstring)) > len(str(botstring))):
        top_heavy = top_heavy + 1

print(top_heavy)
