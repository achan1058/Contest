#include <bits/stdc++.h>
#include "triangle.h"
#include "header.h"

int main() {
	int n;
	double r;
	while (cin >> r >> n) {
		double angle = M_PI / n;
		double area = 2 * n * asa_area(r, angle, M_PI / 2 - angle);
		print("%.3f", area);
	}
}
