#include <bits/stdc++.h>
#include "header.h"

int main() {
	int T, xl1, xr1, xl2, xr2, yl1, yr1, yl2, yr2;
	cin >> T;
	for (int X = 0; X < T; X++) {
		cin >> xl1 >> yl1 >> xr1 >> yr1;
		cin >> xl2 >> yl2 >> xr2 >> yr2;
		int xl = max(xl1, xl2), yl = max(yl1, yl2), xr = min(xr1, xr2), yr = min(yr1, yr2);
		if (X > 0)
			printf("\n");
		if (xl >= xr || yl >= yr)
			printf("No Overlap\n");
		else
			printf("%d %d %d %d\n", xl, yl, xr, yr);
	}
}
