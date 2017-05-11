#include <bits/stdc++.h>
#include "header.h"

int main() {
	ll n;
	while (cin >> n && n != 0) {
		ll d = n + n / 9;
		if (n % 9 == 0)
			printf("%lld ", d - 1);
		printf("%lld\n", d);
	}
}
