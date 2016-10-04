import math

while True:
    try:
        n = int(input())
    except EOFError:
        exit()

    print(math.factorial(2 * n) // math.factorial(n) // math.factorial(n) // (n + 1))

