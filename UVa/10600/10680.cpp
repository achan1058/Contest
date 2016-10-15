#include <bits/stdc++.h>
#include "primes.h"

int main() {
	int n;
	vi ans(1000001), times(1000001, 1);
	vi primes = sieve(1000000);
	irep(p, primes) {
		times[p] = p % 10;
		if (p < 1000) {
			for (int p2 = p * p; p2 <= 1000000; p2 *= p)
				times[p2] = p % 10;
		}
	}
	ans[1] = 1;
	rep(i, 2, 1000001) {
		if (times[i] == 5) {
			ans[i] = ans[i - 1] / 2;
			ans[i] += (ans[i] % 2) * 5;
		} else
			ans[i] = ans[i - 1] * times[i];

		ans[i] %= 10;
	}

	while (cin >> n && n != 0)
		printf("%d\n", ans[n]);
}
