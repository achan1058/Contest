#include <bits/stdc++.h>
#include "header.h"

int main() {
	double a, b, s, m, n;
	while (cin >> a >> b >> s >> m >> n && (a || b || s || m || n)) {
		a *= m;
		b *= n;
		double v = sqrt(a * a + b * b), d = acos(a / v) / acos(-1) * 180;
		printf("%.2lf %.2lf\n", d, v / s);
	}
}
