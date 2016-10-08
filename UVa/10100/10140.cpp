#include <bits/stdc++.h>
#include "primes.h"

int main() {
	vi small = sieve(46340);
	int l, r;

	while (cin >> l >> r) {
		vi primes;
		rep(i, 0, r - l + 1) {
			if (fastIsPrime(l + i, small))
				primes.pb(l + i);
		}

		if (sz(primes) < 2) {
			printf("There are no adjacent primes.\n");
		} else {
			int c1 = primes[0], c2 = primes[1], d1 = primes[0], d2 = primes[1];
			rep(i, 2, sz(primes)) {
				if (primes[i] - primes[i - 1] < c2 - c1) {
					c2 = primes[i];
					c1 = primes[i - 1];
				}
				if (primes[i] - primes[i - 1] > d2 - d1) {
					d2 = primes[i];
					d1 = primes[i - 1];
				}
			}
			printf("%d,%d are closest, %d,%d are most distant.\n", c1, c2, d1, d2);
		}
	}
}
