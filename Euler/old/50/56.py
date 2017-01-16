maxsum = 0

for a in range(1, 101):
    for b in range(1, 101):
        maxsum = max(maxsum, sum(map(int,str(a**b))))

print(maxsum)
