#include <bits/stdc++.h>
#include "circle.h"

int main() {
	ptd a, b, c;
	while (cin >> a >> b >> c) {
		Circle<double> circle(a, b, c);
		char sn1 = '-', sn2 = '-', sn3 = '+';
		double v = circle.c.norm2() - circle.r * circle.r;
		if (circle.c.x < eps)
			sn1 = '+';
		if (circle.c.y < eps)
			sn2 = '+';
		if (v < -eps)
			sn3 = '-';

		printf("(x %c %.3f)^2 + (y %c %.3f)^2 = %.3f^2\n", sn1, fabs(circle.c.x), sn2, fabs(circle.c.y), circle.r);
		printf("x^2 + y^2 %c %.3fx %c %.3fy %c %.3f = 0\n\n", sn1, 2 * fabs(circle.c.x), sn2, 2 * fabs(circle.c.y), sn3, fabs(v));
	}
}
