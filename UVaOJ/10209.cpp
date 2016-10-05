#include <bits/stdc++.h>
#include "header.h"

int main() {
	double r;
	double tri = PI / 3 - sqrt(3) / 4;
	double qcirc = PI / 4;
	double cone = 2 * tri - qcirc;
	double wedge = 2 * qcirc - 1;
	double center = 2 * cone - wedge;
	double rose = 2 * wedge - 2 * center;
	double side = 1 - center - rose;
	while (cin >> r)
		printf("%.3f %.3f %.3f\n", r * r * center, r * r * rose, r * r * side);
}
