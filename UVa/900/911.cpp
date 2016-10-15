#include <bits/stdc++.h>
#include "combinatorics.h"

int main() {
	ll v, a, n, r;
	while (cin >> v >> n) {
		vi coeff(n);
		irep(c, coeff)
			cin >> c;

		printf("%lld\n", multinomial<ll>(coeff));
	}
}
