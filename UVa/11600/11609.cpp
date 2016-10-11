#include <bits/stdc++.h>
#include "number_theory.h"

int main() {
	ll mod = 1000000007, n;
	int N;
	cin >> N;
	rep(X, 1, N + 1) {
		cin >> n;
		n *= power(2ll, n - 1, mod);
		n %= mod;
		printf("Case #%d: %lld\n", X, n);
	}
}
