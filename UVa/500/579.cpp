#include <bits/stdc++.h>
#include "header.h"

int main() {
	int h, m;
	char c;
	while (cin >> h >> c >> m && (h | m != 0)) {
		double hour = (h + m / 60.) / 12 * 360;
		double minute = m / 60. * 360;
		double diff = abs(hour - minute);
		print("%.3f", min(diff, 360 - diff));
	}
}
