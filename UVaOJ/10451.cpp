#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, X = 1;
	double a;
	while (cin >> n >> a && n >= 3) {
		double ta = a / n, theta = PI / n, mr = sqrt(ta / tan(theta)), Mr = mr / cos(theta);
		printf("Case %d: %.5f %.5f\n", X, Mr * Mr * PI - a, a - mr * mr * PI);
		X++;
	}
}
