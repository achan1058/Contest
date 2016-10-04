#include <bits/stdc++.h>
#include "header.h"

int main() {
	ll s, d;
	while (cin >> s >> d) {
		d += s * (s - 1) / 2 - 1;
		ll d2 = ll(sqrt(d));
		while (d2 * (d2 + 1) / 2 <= d)
			d2++;
		printf("%lld\n", d2);
	}
}
