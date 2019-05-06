#include <bits/stdc++.h>
#include "header.h"

int main() {
	double d;
	double tri = M_PI / 3 - sqrt(3) / 4;
	double oval = M_PI / 2 - 1;
	double wedge = 2 * tri - M_PI / 4;
	double a1 = 2 * wedge - oval;
	double a2 = 4 * (oval - wedge);
	double a3 = 1 - a1 - a2;
	while (cin >> d)
		print("%.3f %.3f %.3f", d * d * a1, d * d * a2, d * d * a3);
}
