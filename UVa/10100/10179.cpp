#include <bits/stdc++.h>
#include "primes.h"
#include "header.h"

int main() {
	vi primes = sieve(32000);
	int n;
	while (cin >> n && n != 0) {
		vi p = fastFactor(n, primes);
		printd(eulerPhi(p));
	}
}
