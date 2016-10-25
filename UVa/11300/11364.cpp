#include <bits/stdc++.h>
#include "header.h"

int main() {
	int m, M, n, v;
	forX() {
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
