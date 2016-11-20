#include <bits/stdc++.h>
#include "primes.h"

int main() {
	int ans = 0;
	vb good(30000);
	vi abd;
	rep(n, 2, 30000) {
		if (sumFactors(factor(n)) > 2 * n) {
			abd.pb(n);
			irep(v, abd) {
				if (n + v >= 30000)
					break;
				good[n + v] = true;
			}
		}
	}
	rep(n, 1, 30000) {
		if (!good[n])
			ans += n;
	}
	printf("%d\n", ans);
}
