#include <bits/stdc++.h>
#include "primes.h"
#include "header.h"

int main() {
	vb primes = sieveVector(20000000);
	vi twins;
	rep(i, 0, sz(primes) - 1) {
		if (primes[i] && primes[i + 1])
			twins.push_back(2 * i + 1);
	}

	int n;
	while (cin >> n) {
		print("(%d, %d)", twins[n - 1], twins[n - 1] + 2);
	}
}
