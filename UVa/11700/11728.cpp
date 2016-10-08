#include <bits/stdc++.h>
#include "primes.h"

int main() {
	vi f(1001, -1);
	int X = 1, n;
	rep(i, 1, 1001) {
		int s = sumFactors(factor(i));
		if (s <= 1000)
			f[s] = i;
	}
	while (cin >> n && n != 0) {
		printf("Case %d: %d\n", X, f[n]);
		X++;
	}
}
