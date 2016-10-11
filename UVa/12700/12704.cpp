#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N, x, y, r;
	cin >> N;
	rep(X, 0, N) {
		cin >> x >> y >> r;
		double d = sqrt(x * x + y * y);
		printf("%.2f %.2f\n", r - d, r + d);
	}
}
