#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		int x, y, z, d, xl, xr, yl, yr, zl, zr;
		for (int i = 0; i < n; i++) {
			cin >> x >> y >> z >> d;
			if (i == 0) {
				xl = x;
				xr = x + d;
				yl = y;
				yr = y + d;
				zl = z;
				zr = z + d;
			} else {
				xl = max(xl, x);
				xr = min(xr, x + d);
				yl = max(yl, y);
				yr = min(yr, y + d);
				zl = max(zl, z);
				zr = min(zr, z + d);
			}
		}
		int dx = max(0, xr - xl), dy = max(0, yr - yl), dz = max(0, zr - zl);
		printf("%d\n", dx * dy * dz);
	}
}
