#include <bits/stdc++.h>
#include "header.h"

int main() {
	int m, M, N, n, v;
	cin >> N;
	rep(X, 0, N) {
		m = inf;
		M = -inf;
		cin >> n;

		rep(i, 0, n) {
			cin >> v;
			m = min(v, m);
			M = max(v, M);
		}
		printf("%d\n", 2 * (M - m));
	}
}
