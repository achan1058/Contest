def isPrime(n):
    if n < 2: return False
    if n <= 3: return True
    if n % 2 == 0 or n % 3 == 0: return False
    p = 5
    while p * p <= n:
        if n % p == 0 or n % (p + 2) == 0:
            return False
        p += 6
    return true
