#include <bits/stdc++.h>
#include "triangle.h"

int main() {
	double ma, mb, mc;
	while (cin >> ma >> mb >> mc) {
		double ma2 = 4 * ma * ma, mb2 = 4 * mb * mb, mc2 = 4 * mc * mc;
		double a = (-ma2 + 2 * mb2 + 2 * mc2) / 9;
		double b = (-mb2 + 2 * ma2 + 2 * mc2) / 9;
		double c = (-mc2 + 2 * ma2 + 2 * mb2) / 9;
		if (a > eps && b > eps && c > eps && sss_area(sqrt(a), sqrt(b), sqrt(c)) > eps)
			printf("%.3f\n", sss_area(sqrt(a), sqrt(b), sqrt(c)));
		else
			printf("%.3f\n", -1.);
	}
}
