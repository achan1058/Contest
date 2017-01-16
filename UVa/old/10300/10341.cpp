#include <bits/stdc++.h>
#include "binary_search.h"

double p, q, r, s, t, u;
inline double func(double x) {
	return p * exp(-x) + q * sin(x) + r * cos(x) + s * tan(x) + t * x * x + u;
}

int main() {
	while (cin >> p >> q >> r >> s >> t >> u) {
		double result = binarySearch<double>(func, 0, 1, eps, false);
		if (result == inf)
			printf("No solution\n");
		else
			printf("%.4lf\n", result);
	}
}
