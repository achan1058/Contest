#include <bits/stdc++.h>
#include "header.h"

int main() {
	for (ll a = 100000000; a < 140000000; a++) {
		ll sq = a * a;
		bool good = true;
		rep(i, 0, 9) {
			if (sq % 10 != 9 - i) {
				good = false;
				break;
			}
			sq /= 100;
		}

		if (good) {
			printf("%lld\n", a * 10);
			break;
		}
	}
}
