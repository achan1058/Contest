arr = [[0] * 101 for i in range(101)]
for i in range(101):
    arr[i][i] = 1
    for j in range(i):
        arr[i][j] = arr[i - 1][j] * 2 + pow(2, i - j - 1) - arr[i - j - 1][j]

while True:
    try:
        n,k = map(int,input().split())
    except EOFError:
        exit()
    print(arr[n][k])
    