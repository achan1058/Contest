#include <bits/stdc++.h>
#include "header.h"

int main() {
	ll n, m;
	int X = 1;
	while (cin >> n >> m && (n | m) != 0) {
		printf("Case %d: %lld\n", X, n * (n - 1) * m * (m - 1) / 4);
		X++;
	}
}
