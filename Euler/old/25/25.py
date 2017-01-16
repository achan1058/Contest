cur = 1
prev = 0

for count in range(2, 10000):
    nx = cur + prev
    if len(str(nx)) >= 1000:
        print(count)
        exit()
    cur,prev = nx,cur
