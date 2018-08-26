#include <bits/stdc++.h>
#include "triangle.h"
#include "header.h"

int main() {
	double a, b, c;
	while(cin >> a >> b >> c) {
		if (a + b + c <= eps) {
			print("The radius of the round table is: 0.000");
			continue;
		}
		double ans = 2 * sss_area(a, b, c) / (a + b + c);
		print("The radius of the round table is: %.3f", ans);
	}
}
