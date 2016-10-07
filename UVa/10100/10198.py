arr = [0] * 1003
arr[0] = 1
for i in range(1000):
    arr[i + 1] += arr[i] * 2;
    arr[i + 2] += arr[i];
    arr[i + 3] += arr[i];
while True:
    try:
        n = int(input())
    except EOFError:
        exit()

    print(arr[n])
    