#include <bits/stdc++.h>
#include "header.h"

int main() {
	double s, d;
	string a;
	while (cin >> s >> d >> a) {
		s += 6440;
		if (a == "min")
			d /= 60;
		if (d > 180)
			d = 360 - d;
		d = d / 180 * M_PI;

		print("%.6f %.6f", d * s, sin(d / 2) * s * 2);
	}
}
