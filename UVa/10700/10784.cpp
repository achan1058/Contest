#include <bits/stdc++.h>
#include "header.h"

int main() {
	int X = 1;
	ll n;
	while (cin >> n && n != 0) {
		ll s = ll(sqrt(n * 2));
		while (s * (s - 3) / 2 < n)
			s++;

		printc("%lld\n", s);
		X++;
	}
}
