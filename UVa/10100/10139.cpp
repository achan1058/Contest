#include <bits/stdc++.h>
#include "primes.h"

int main() {
	ll n, m;
	while (cin >> n >> m) {
		bool good = true;
		if (m == 0) {
			good = false;
		} else {
			map<ll, int> powers;
			vl primes = factor(m);
			irep(p, primes)
				powers[p]++;
			irep(p, powers) {
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
