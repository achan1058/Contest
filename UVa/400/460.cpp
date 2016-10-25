#include <bits/stdc++.h>
#include "header.h"

int main() {
	int xl1, xr1, xl2, xr2, yl1, yr1, yl2, yr2;
	forX() {
		cin >> xl1 >> yl1 >> xr1 >> yr1;
		cin >> xl2 >> yl2 >> xr2 >> yr2;
		int xl = max(xl1, xl2), yl = max(yl1, yl2), xr = min(xr1, xr2), yr = min(yr1, yr2);
		if (xl >= xr || yl >= yr)
			printX("No Overlap\n");
		else
			printX("%d %d %d %d\n", xl, yl, xr, yr);
	}
}
