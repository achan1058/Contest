#include <bits/stdc++.h>
#include "header.h"

int main() {
	ll n;
	whileX(cin >> n && n != 0) {
		ll t = sqrt(2 * n);
		while (t * (t - 3) / 2 < n)
			t++;
		printc("%lld\n", t);
	}
}
