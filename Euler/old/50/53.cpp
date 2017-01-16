#include <bits/stdc++.h>
#include "combinatorics.h"

int main() {
	int ans = 0;
	vvi nCr = binomialTable<int>(100);
	rep(n, 1, 101) {
		rep(r, 0, n + 1) {
			if (nCr[n][r] > 1000000) {
				ans += n + 1 - 2 * r;
				break;
			}
		}
	}
	printf("%d\n", ans);
}
