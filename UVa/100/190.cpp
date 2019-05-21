#include <bits/stdc++.h>
#include "circle.h"
#include "header.h"

int main() {
	ptd p1, p2, p3;
	while (cin >> p1 >> p2 >> p3) {
		Circle<double> c(p1, p2, p3);
		double x = abs(c.c.x), y = abs(c.c.y), z = x * x + y * y - c.radius() * c.radius();
		char cx = c.c.x > 0 ? '-' : '+', cy = c.c.y > 0 ? '-' : '+';
		print("(x %c %.3f)^2 + (y %c %.3f)^2 = %.3f^2", cx, x, cy, y, c.radius());
		print("x^2 + y^2 %c %.3fx %c %.3fy %c %.3f = 0\n", cx, 2 * x, cy, 2 * y, z > 0 ? '+' : '-', abs(z));
	}
}
