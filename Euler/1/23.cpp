#include <bits/stdc++.h>
#include "primes.h"
#include "header.h"

int main() {
	int n = 28123, ans = 0;
	vi abd;
	vb hit(n + 1);
	rep(i, 1, n + 1) {
		if (sumFactors(factor(i)) > 2 * i)
			abd.pb(i);
	}

	drep(i, j, sz(abd), i + 1) {
		if (abd[i] + abd[j] > n)
			break;
		hit[abd[i] + abd[j]] = true;
	}
	rep(i, 1, 24)
		assert(!hit[i]);
	assert(hit[24]);

	rep(i, 1, n + 1) {
		if (!hit[i])
			ans += i;
	}
	printv(ans);
}
