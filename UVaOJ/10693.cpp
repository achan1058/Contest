#include <bits/stdc++.h>
#include "header.h"

int main() {
	int L, f;
	while (cin >> L >> f && (L | f) != 0) {
		double v = sqrt(2 * L * f);
		double vl = 1800 * v / L;
		printf("%lf %lf\n", v, vl);
	}
}
