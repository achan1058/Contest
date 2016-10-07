#include <bits/stdc++.h>
#include "primes.h"

int main() {
	vi primes = sieve(1000), false_primes = { 1 };
	int n, c;
	irep(p, primes)
		false_primes.pb(p);
	while (cin >> n >> c) {
		int ind = upper_bound(all(false_primes), n) - false_primes.begin();
		int m = max(0, ind / 2 - c + ind % 2), M = min(ind / 2 + c, ind);
		printf("%d %d:", n, c);
		rep(i, m, M)
			printf(" %d", false_primes[i]);
		printf("\n\n");
	}
}
