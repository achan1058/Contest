#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N, n;
	cin >> N;
	rep(X, 0, N) {
		cin >> n;
		if (n < 2) {
			printf("%d\n", n);
			continue;
		}

		ll d = 1, r = 0;
		rrep(t, 9, 2) {
			while (n % t == 0) {
				r += d * t;
				d *= 10;
				n /= t;
			}
		}
		printf("%lld\n", n > 1 ? -1ll : r);
	}
}
