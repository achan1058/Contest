#include <bits/stdc++.h>
#include "primes.h"

int main() {
	ll n, m;
	while (cin >> n >> m) {
		bool good = true;
		if (m == 0) {
			good = false;
		} else {
			auto primes = tally(factor(m));
			fori(p, primes) {
				int nt = n, deg = 0;
				while (nt > 0) {
					nt /= p.x;
					deg += nt;
				}
				if (deg < p.y) {
					good = false;
					break;
				}
			}
		}

		if (good)
			printf("%lld divides %lld!\n", m, n);
		else
			printf("%lld does not divide %lld!\n", m, n);
	}
}
