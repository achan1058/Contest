from fractions import *

N = int(input())
for X in range (N):
    nums = [int(x) for x in input().split()]
    maxgcd = 0

    for i in range (len(nums)):
        for j in range(i + 1, len(nums)):
            maxgcd = max(maxgcd, fractions.gcd(nums[i], nums[j]))
    print(maxgcd)
    