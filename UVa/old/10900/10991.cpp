#include <bits/stdc++.h>
#include "triangle.h"

int main() {
	double r1, r2, r3, A1, A2, A3;
	forX() {
		cin >> r1 >> r2 >> r3;
		double area = sss_area(r1 + r2, r1 + r3, r2 + r3);
		sss_abc(r2 + r3, r1 + r3, r1 + r2, A1, A2, A3);
		area -= (r1 * r1 * A1 + r2 * r2 * A2 + r3 * r3 * A3) / 2;
		printf("%.6f\n", area);
	}
}
