arr = [1] * 251

for i in range(2, 251):
    arr[i] = arr[i - 1] + arr[i - 2] * 2
while True:
    try:
        n = int(input())
    except EOFError:
        exit()

    print(arr[n])
    