def isPrime(n):
    if n < 2: return False
    if n <= 3: return True
    if n % 2 == 0 or n % 3 == 0: return False
    p = 5
    while p * p <= n:
        if n % p == 0 or n % (p + 2) == 0:
            return False
        p += 6
    return True

while True:
    N = int(input())
    if N == 0:
        exit()

    carmichael = True
    if isPrime(N):
        carmichael = False
    else:
        for n in range(2,N):
            if pow(n,N,N) != n:
                carmichael = False
                break

    if carmichael:
        print("The number %d is a Carmichael number." % N)
    else:
        print("%d is normal." % N)
