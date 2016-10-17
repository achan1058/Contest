b = [0] * 1000
b[0] = 1
print(1)
for i in range(1, 210):
    too_big = False
    for j in range(i, 0, -1):
        b[j] += b[j - 1]
        print("%d " % b[j], end="")
        if len(str(b[j])) > 60:
            too_big = True
            
    print(1)
    if too_big:
        exit()
