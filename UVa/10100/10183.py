from bisect import *

fib = [1, 2]
while fib[-1] < 10**100:
    fib.append(fib[-1] + fib[-2])
while True:
    try:
        small,big = map(int,input().split())
    except EOFError:
        exit()
    if small == 0 and big == 0:
        exit()

    print(bisect_right(fib, big) - bisect_left(fib, small))
