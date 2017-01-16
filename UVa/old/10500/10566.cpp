#include <bits/stdc++.h>
#include "binary_search.h"

double x, y, c;
double computeHeight(double d) {
	double z = sqrt(x * x - d * d), w = sqrt(y * y - d * d);
	return z * w / (z + w) - c;
}

int main() {
	while (cin >> x >> y >> c)
		printf("%.3f\n", binarySearch(computeHeight, 0., min(x, y), eps, false));
}
