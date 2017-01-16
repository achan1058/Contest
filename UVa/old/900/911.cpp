#include <bits/stdc++.h>
#include "combinatorics.h"

int main() {
	ll v, a, n, r;
	while (cin >> v >> n) {
		vi coeff(n);
		read(coeff);
		printf("%lld\n", multinomial(coeff));
	}
}
