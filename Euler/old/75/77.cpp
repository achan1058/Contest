#include <bits/stdc++.h>
#include "primes.h"

int main() {
	int n = 1000;
	vi primes = sieve(n), count(n);
	count[0] = 1;
	irep(p, primes) {
		rep(i, 0, n - p)
			count[i + p] += count[i];
	}

	rep(i, 0, n) {
		if (count[i] > 5000) {
			printf("%d\n", i);
			break;
		}
	}
}
