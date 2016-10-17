#include <bits/stdc++.h>
#include "header.h"

int main() {
	ll n;
	while (cin >> n && n != 0) {
		ll m = n + n / 9;
		if (m % 10 == 0)
			printf("%lld ", m - 1);

		printf("%lld\n", m);
	}
}
