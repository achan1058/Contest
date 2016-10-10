from fractions import *
from math import *

while True:
    n = int(input())
    if n == 0:
        exit()

    v = []
    num_gcd = 0
    for i in range(n):
        v.append(int(input()))
        for j in range(i):
            if gcd(v[i], v[j]) == 1:
                num_gcd += 1

    if num_gcd == 0:
        print("No estimate for this data set.");
    else:
        print("%.6f" % sqrt(3 * n * (n - 1) / num_gcd));
