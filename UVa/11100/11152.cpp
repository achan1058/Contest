#include <bits/stdc++.h>
#include "triangle.h"
#include "header.h"

int main() {
	double a, b, c;
	while (cin >> a >> b >> c) {
		double area = sss_area(a, b, c);
		double inrad = 2 * area / (a + b + c);
		double cirad = a * b * c / 4 / area;
		double ina = inrad * inrad * M_PI;
		double cia = cirad * cirad * M_PI;
		print("%.4f %.4f %.4f", cia - area, area - ina, ina);
	}
}
