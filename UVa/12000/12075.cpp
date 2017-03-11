#include <bits/stdc++.h>
#include "header.h"

int main() {
	ll n, m;
	whileX(cin >> n >> m && (n | m) != 0) {
		n++;
		m++;
		ll a = n * m, ans = a * (a - 1) * (a - 2) / 6;
		ans -= n * (n - 1) * (n - 2) * m / 6;
		ans -= m * (m - 1) * (m - 2) * n / 6;
		rep(i, 2, n + 1) {
			rep(j, 2, m + 1) {
				ll p = gcd(i, j) - 1;
				ans -= 2 * p * ll(n - i) * ll(m - j);
			}
		}
		printc("%lld\n", ans);
	}
}
