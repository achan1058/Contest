#include <bits/stdc++.h>
#include "triangle.h"

int main() {
	double a, b, c;
	while (cin >> a >> b >> c) {
		double area = sss_area(a, b, c);
		double inrad = 2 * area / (a + b + c);
		double circumrad = a * b * c / 4 / area;
		double inarea = inrad * inrad * M_PI;
		double circumarea = circumrad * circumrad * M_PI;
		printf("%.4f %.4f %.4f\n", circumarea - area, area - inarea, inarea);
	}
}
