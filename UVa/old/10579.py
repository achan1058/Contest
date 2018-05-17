fib = [0, 1]
while fib[-1] < 10**1000:
    fib.append(fib[-1] + fib[-2])
while True:
    try:
        n = int(input())
    except EOFError:
        exit()

    print(fib[n])
