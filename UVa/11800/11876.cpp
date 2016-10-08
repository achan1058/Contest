#include <bits/stdc++.h>
#include "primes.h"

int main() {
	vi n(1, 1);
	int N, A, B;
	cin >> N;
	while (n.back() <= 1000000)
		n.pb(n.back() + numFactors(factor(n.back())));
	rep(X, 1, N + 1) {
		cin >> A >> B;
		printf("Case %d: %d\n", X, upper_bound(all(n), B) - lower_bound(all(n), A));
	}
}
