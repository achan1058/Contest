#include <bits/stdc++.h>
#include "primes.h"

int main() {
	int n;
	vi primes = sieve(20000000), twin;
	rep(i, 0, sz(primes) - 1) {
		if (primes[i] == primes[i + 1] - 2)
			twin.pb(primes[i]);
	}
	while (cin >> n)
		printf("(%d, %d)\n", twin[n - 1], twin[n - 1] + 2);
}
