#include <bits/stdc++.h>
#include "primes.h"
#include "header.h"

int main() {
	vi primes = sieve(10000);
	int n;
	while (cin >> n) {
		if (n == 5) {
			print("5 is the sum of 2 and 3.");
		} else if (n <= 6) {
			print("%d is not the sum of two primes!", n);
		} else if (n % 2 == 1) {
			if (fastIsPrime(n - 2, primes))
				print("%d is the sum of 2 and %d.", n, n - 2);
			else
				print("%d is not the sum of two primes!", n);
		}	else {
			int m = n / 2 - 1;
			if (m % 2 == 0)
				m--;
			while (true) {
				if (fastIsPrime(m, primes) && fastIsPrime(n - m, primes)) {
					print("%d is the sum of %d and %d.", n, m, n - m);
					break;
				}
				m -= 2;
			}
		}
	}
}
