#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	double a, b, c;
	whileX(cin >> n >> a >> b >> c && n != 0) {
		if (n == 1) {
			printc("%.3f %.3f", (a + b) * c / 2, (b - a) / c);
		} else if (n == 2) {
			double t = (b - a) / c;
			printc("%.3f %.3f", (a + b) * t / 2, t);
		} else if (n == 3) {
			double t = (-a + sqrt(a * a + 2 * b * c)) / b;
			printc("%.3f %.3f", a + b * t, t);
		} else if (n == 4) {
			double t = (a - sqrt(a * a - 2 * b * c)) / b;
			printc("%.3f %.3f", a - b * t, t);
		}
	}
}
