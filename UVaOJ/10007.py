import math

while True:
    n = int(input())
    if n == 0:
        exit()

    print(math.factorial(2 * n) // math.factorial(n + 1))
