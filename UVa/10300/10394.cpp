#include <bits/stdc++.h>
#include "primes.h"
#include "header.h"

int main() {
	vi primes = sieve(20000000), twins;
	rep(i, 0, sz(primes) - 1) {
		if (primes[i] + 2 == primes[i + 1])
			twins.pb(primes[i]);
	}
	int n;
	while (cin >> n) {
		print("(%d, %d)", twins[n - 1], twins[n - 1] + 2);
	}
}
