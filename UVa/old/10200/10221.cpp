#include <bits/stdc++.h>
#include "triangle.h"

int main() {
	int d, a;
	string s;
	while (cin >> d >> a >> s) {
		double radius = d + 6440;
		double angle = a * M_PI / 180;
		if (s == "min")
			angle /= 60;
		while (angle >= 2 * M_PI - eps)
			angle -= 2 * M_PI;
		while (angle < -eps)
			angle += 2 * M_PI;
		if (angle > M_PI)
			angle = 2 * M_PI - angle;

		printf("%.6f %.6f\n", angle * radius, cosLawSide(angle, radius, radius));
	}
}
