#include <bits/stdc++.h>
#include "primes.h"
#include "header.h"

int main() {
	ll n, m;
	while (cin >> n >> m) {
		auto primes = tally(factor(m));
		bool good = true;
		irep(p, primes) {
			int count = 0, t = n;
			while (t > 0) {
				t /= p.first;
				count += t;
			}
			if (count < p.second) {
				good = false;
				break;
			}
		}
		if (good)
			print("%lld divides %lld!", m, n);
		else
			print("%lld does not divide %lld!", m, n);
	}
}
