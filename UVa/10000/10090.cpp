#include <bits/stdc++.h>
#include "number_theory.h"

int main() {
	ll n, c1, n1, c2, n2;
	while (cin >> n && n != 0) {
		cin >> c1 >> n1 >> c2 >> n2;

		auto g = egcd(n1, n2);
		if (n % get<0>(g)) {
			printf("failed\n");
			continue;
		}
		
		n /= get<0>(g);
		n1 /= get<0>(g);
		n2 /= get<0>(g);
		get<0>(g) = 1;
		ll a1 = get<1>(g) * n, a2 = get<2>(g) * n;
		if (a1 < 0) {
			ll d = (a1 / n2 + (a1 % n2 == 0 ? 0 : -1));
			a1 -= d * n2;
			a2 += d * n1;
		}
		if (a2 < 0) {
			ll d = (a2 / n1 + (a2 % n1 == 0 ? 0 : -1));
			a2 -= d * n1;
			a1 += d * n2;
		}

		if (a1 < 0 || a2 < 0) {
			printf("failed\n");
			continue;
		}

		if (c1 * n2 < c2 * n1) {
			ll v = a2 / n1;
			a2 -= v * n1;
			a1 += v * n2;
		} else {
			ll v = a1 / n2;
			a1 -= v * n2;
			a2 += v * n1;
		}

		printf("%lld %lld\n", a1, a2);
	}
}
