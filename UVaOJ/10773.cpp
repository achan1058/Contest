#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N;
	double d, v, u;
	cin >> N;
	rep(X, 1, N + 1) {
		cin >> d >> v >> u;
		if (u <= v + eps || v == 0) {
			printf("Case %d: can't determine\n", X);
			continue;
		}
		double t1 = d / u, t2 = d / sqrt(u * u - v * v);
		printf("Case %d: %.3lf\n", X, t2 - t1);
	}
}
