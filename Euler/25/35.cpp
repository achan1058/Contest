#include <bits/stdc++.h>
#include "primes.h"

int main() {
	vb primes = sieveVector(1000000);
	int position = 1, num_digits = 1, ans = 1;
	rep(i, 3, 1000000) {
		if (i >= 10 * position) {
			position *= 10;
			num_digits++;
		}

		int good = 1, p = i;
		rep(k, 0, num_digits) {
			if (p % 2 == 0 || !primes[p / 2]) {
				good = 0;
				break;
			}
			p = p / 10 + (p % 10) * position;
		}
		ans += good;
	}
	printf("%d\n", ans);
}
