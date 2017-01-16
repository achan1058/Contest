#include <bits/stdc++.h>
#include "header.h"

int main() {
	ll ans = 0;
	vi a = { 1, 0, 2, 3, 4, 5, 6, 7, 8, 9 }, p = { 2, 3, 5, 7, 11, 13, 17 };
	do {
		bool good = true;
		rep(i, 0, 7) {
			if ((a[i + 1] * 100 + a[i + 2] * 10 + a[i + 3]) % p[i] != 0) {
				good = false;
				break;
			}
		}
		if (good) {
			ll n = 0;
			rep(i, 0, 10) {
				n *= 10;
				n += a[i];
			}
			ans += n;
		}
	} while (next_permutation(all(a)));
	printf("%lld\n", ans);
}
