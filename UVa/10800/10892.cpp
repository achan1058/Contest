#include <bits/stdc++.h>
#include "primes.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		vi primes = factor(n);
		map<int, int> fact;
		irep(p, primes)
			fact[p]++;

		int d = 1;
		irep(p, fact)
			d *= 2 * p.second + 1;
		printf("%d %d\n", n, (d + 1) / 2);
	}
}
