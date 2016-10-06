#include <bits/stdc++.h>
#include "header.h"

int main() {
	double a, b, c, d, e;
	int n, X = 1;

	while (cin >> n >> a >> b >> c && n != 0) {
		if (n == 1) {
			e = (b - a) / c;
			d = (a + b) * c / 2;
		} else if (n == 2) {
			e = (b - a) / c;
			d = (a + b) * e / 2;
		} else if (n == 3) {
			e = (-a + sqrt(a * a + 2 * b * c)) / b;
			d = a + b * e;
		} else if (n == 4) {
			e = (a - sqrt(a * a - 2 * b * c)) / b;
			d = a - b * e;
		}

		printf("Case %d: %.3f %.3f\n", X, d, e);
		X++;
	}
}
