#include <bits/stdc++.h>
#include "triangle.h"

int main() {
	double a, b, c;
	while (cin >> a >> b >> c) {
		if (a + b + c < eps)
			printf("The radius of the round table is: 0.000\n");
		else
			printf("The radius of the round table is: %.3f\n", 2 * sss_area(a, b, c) / (a + b + c) + eps);
	}
}
