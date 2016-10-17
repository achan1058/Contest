#include <bits/stdc++.h>
#include "header.h"

int main() {
	vector<pii> out(10001, { inf, inf });
	rep(dx, 1, 10001) {
		rep(y0, 1, 10001) {
			int x0 = y0 + dx, prod = x0 * x0 * x0 - y0 * y0 * y0;
			if (x0 * x0 + x0 * y0 + y0 * y0 > 10000 || prod > 10000)
				break;
			if (out[prod].y > y0)
				out[prod] = { x0, y0 };
		}
	}
	int n;
	while (cin >> n && n != 0) {
		if (out[n].y != inf)
			printf("%d %d\n", out[n].x, out[n].y);
		else
			printf("No solution\n");
	}
}
