while True:
    b, p, m = int(input()), int(input()), int(input())
    print(pow(b, p, m))
    try:
        s = input()
    except EOFError:
        exit()
