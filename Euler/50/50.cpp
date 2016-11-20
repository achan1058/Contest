#include <bits/stdc++.h>
#include "primes.h"

int main() {
	vi primes = sieve(1000000);
	int mx = 0;
	for (int sum = 0; sum < 1000000; mx++)
		sum += primes[mx];
	rrep(i, mx - 1, 0) {
		int sum = 0;
		rep(j, 0, i)
			sum += primes[j];
		for (int j = 0; sum < 1000000; j++) {
			if (binary_search(all(primes), sum)) {
				printf("%d\n", sum);
				return 0;
			}
			sum -= primes[j];
			sum += primes[j + i];
		}
	}
}
