#include <bits/stdc++.h>
#include "primes.h"

int main() {
	vi primes = sieve(10000);
	vb good(10000, true);
	irep(p, primes) {
		for (int j = 0; p + 2 * j * j < 10000; j++)
			good[p + 2 * j * j] = false;
	}
	for (int i = 9; i < 10000; i += 2) {
		if (good[i]) {
			printf("%d\n", i);
			break;
		}
	}
}
