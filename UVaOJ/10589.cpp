#include <bits/stdc++.h>
#include "header.h"

int main() {
	eps = 1e-6;
	int n;
	double a, x, y;

	while (cin >> n >> a && n != 0) {
		double in = 0;
		ll la = ll(a * 10000000 + eps);
		rep(i, 0, n) {
			cin >> x >> y;
			ll lx = ll(x * 10000000 + eps), ly = ll(y * 10000000 + eps);
			ll dx = la - lx, dy = la - ly;
			if (lx * lx + ly * ly <= la * la &&
				lx * lx + dy * dy <= la * la &&
				dx * dx + ly * ly <= la * la &&
				dx * dx + dy * dy <= la * la)
				in++;
		}
		printf("%.5lf\n", in * a * a / n);
	}
}
