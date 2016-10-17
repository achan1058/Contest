#include <bits/stdc++.h>
#include "header.h"

int main() {
	ll n;
	while (cin >> n) {
		ll s2 = 0, r2 = 0, s3 = 0, r3 = 0, s4 = 0, r4 = 0;
		rep(i, 1, n + 1) {
			s2 += i * i;
			s3 += i * i * i;
			s4 += i * i * i * i;
		}

		r2 = n * n * (n + 1) * (n + 1) / 4;
		r3 = r2 * n * (n + 1) / 2;
		r4 = r3 * n * (n + 1) / 2;
		printf("%lld %lld %lld %lld %lld %lld\n", s2, r2 - s2, s3, r3 - s3, s4, r4 - s4);
	}
}
