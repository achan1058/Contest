#include <bits/stdc++.h>
#include "header.h"

int main() {
	ll n;
	whileX(cin >> n && n != 0) {
		ll s = ll(sqrt(n * 2));
		while (s * (s - 3) / 2 < n)
			s++;

		printc("%lld\n", s);
	}
}
