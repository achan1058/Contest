#include <bits/stdc++.h>
#include "primes.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		auto primes = tally(factor(n));
		int d = 1;
		fori(p, primes)
			d *= 2 * p.second + 1;
		printf("%d %d\n", n, (d + 1) / 2);
	}
}
