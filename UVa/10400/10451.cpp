#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, X = 1;
	double a;
	while (cin >> n >> a && n >= 3) {
		double ta = a / n, theta = M_PI / n, mr = sqrt(ta / tan(theta)), Mr = mr / cos(theta);
		printc("%.5f %.5f\n", Mr * Mr * M_PI - a, a - mr * mr * M_PI);
		X++;
	}
}
