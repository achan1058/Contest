#include <bits/stdc++.h>
#include "header.h"

int main() {
	vl bp;
	ll n;
	bp.pb(1);
	while (bp.back() <= ll(inf) * 10) {
		bp.pb(bp.back() * 9);
		bp.pb(bp.back() * 2);
	}

	while (cin >> n) {
		int t = lower_bound(all(bp), n) - bp.begin();
		if (t % 2 == 0)
			printf("Ollie wins.\n");
		else
			printf("Stan wins.\n");
	}
}
