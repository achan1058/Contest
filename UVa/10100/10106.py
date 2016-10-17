while True:
    try:
        x,y = int(input()),int(input())
    except EOFError:
        exit()

    print(x * y)
