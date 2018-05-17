arr = [0] * 1001
arr[0] = 1
arr[1] = 2
for i in range(2,1001):
    arr[i] = arr[i - 1] + arr[i - 2]

while True:
    try:
        n = int(input())
    except EOFError:
        exit()
    print(arr[n])
    