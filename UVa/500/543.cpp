#include <bits/stdc++.h>
#include "primes.h"

int main() {
	vi primes = sieve(1100000);
	int n;
	while (cin >> n && n != 0) {
		int m = 0, M = upper_bound(all(primes), n) - primes.begin();
		while (m <= M) {
			if (primes[m] + primes[M] == n) {
				printf("%d = %d + %d\n", n, primes[m], primes[M]);
				break;
			} else if (primes[m] + primes[M] > n)
				M--;
			else
				m++;
		}
	}
}
