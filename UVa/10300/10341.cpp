#include <bits/stdc++.h>
#include "binary_search.h"
#include "header.h"

int p, q, r, s, t, u;
double eq(double x) {
	return p * exp(-x) + q * sin(x) + r * cos(x) + s * tan(x) + t * x * x + u;
}

int main() {
	while (cin >> p >> q >> r >> s >> t >> u) {
		double d = binarySearch(eq, 0., 1., eps, false);
		if (d == -inf)
			print("No solution");
		else
			print("%.4f", d);
	}
}
