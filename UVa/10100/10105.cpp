#include <bits/stdc++.h>
#include "combinatorics.h"

int main() {
	int n, k, t;
	while (cin >> n >> k) {
		ll result = 1;
		rep(i, 0, k) {
			cin >> t;
			result *= binomial(n, t);
			n -= t;
		}
		printf("%lld\n", result);
	}
}
