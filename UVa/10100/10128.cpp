#include <bits/stdc++.h>
#include "combinatorics.h"

int main() {
	int n, p, r;
	vl fact = factTable<ll>(13);
	vvl inc = ml(14, 14, 0);
	vvl binom = binomialTable<ll>(13);
	inc[0][0] = 1;

	for (int i = 1; i <= 13; i++) {
		for (int j = 1; j <= i; j++) {
			for (int k = 1; k <= i; k++)
				inc[i][j] += binom[i - 1][k - 1] * inc[k - 1][j - 1] * fact[i - k];
		}
	}

	forX() {
		cin >> n >> p >> r;
		if (p <= 0 || p > n || r <= 0 || r > n) {
			printf("0\n");
			continue;
		}
		ll ans = 0;
		for (int i = 1; i <= n; i++)
			ans += binom[n - 1][i - 1] * inc[i - 1][p - 1] * inc[n - i][r - 1];
		printf("%lld\n", ans);
	}
}
