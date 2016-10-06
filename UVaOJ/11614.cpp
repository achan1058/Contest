#include <bits/stdc++.h>
#include "header.h"

int main() {
	ll N, n;
	cin >> N;
	rep(X, 0, N) {
		cin >> n;
		ll r = ll(sqrt(2 * n));
		while (n >= r * (r + 1) / 2)
			r++;
		printf("%lld\n", r - 1);
	}
}
