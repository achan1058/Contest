#include <bits/stdc++.h>
#include "header.h"

int main() {
	int h, m;
	char c;
	while (cin >> h >> c >> m) {
		if (h == 0 && m == 0)
			return 0;

		double hour = h / 12., minute = m / 60.;
		hour += minute / 12.;
		double angle = 360 * (hour - minute);
		if (angle < -eps)
			angle += 360;
		if (angle > 180)
			angle = 360 - angle;
		printf("%.3f\n", angle);
	}
}
