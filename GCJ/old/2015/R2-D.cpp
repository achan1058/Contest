#include <bits/stdc++.h>
#include "header.h"

int main() {
	int r, c;
	forX() {
		cin >> r >> c;
		vvl ans = ml(r + 5, 15, 0);
		ans[0][1] = 1;

		rep(i, 3, r + 5) {
			ans[i][1] = add(ans[i][1], ans[i - 3][1]);
			ans[i][3] = add(ans[i][3], ans[i - 3][3]);
			ans[i][4] = add(ans[i][4], ans[i - 3][4]);
			ans[i][6] = add(ans[i][6], ans[i - 3][6]);
			ans[i][12] = add(ans[i][12], ans[i - 3][12]);
			if (i >= 4 && c % 3 == 0) {
				ans[i][3] = add(ans[i][3], ans[i - 4][1]);
				ans[i][3] = add(ans[i][3], mul(ans[i - 4][3], 3));
				ans[i][12] = add(ans[i][12], ans[i - 4][4]);
				ans[i][6] = add(ans[i][6], mul(ans[i - 4][6], 3));
				ans[i][12] = add(ans[i][12], mul(ans[i - 4][12], 3));
			}
			if (i >= 4 && c % 6 == 0) {
				ans[i][6] = add(ans[i][6], ans[i - 4][1]);
				ans[i][6] = add(ans[i][6], mul(ans[i - 4][3], 3));
				ans[i][12] = add(ans[i][12], mul(ans[i - 4][4], 2));
				ans[i][6] = add(ans[i][6], mul(ans[i - 4][6], 6));
				ans[i][12] = add(ans[i][12], mul(ans[i - 4][12], 6));
			}
			if (i >= 5 && c % 4 == 0) {
				ans[i][4] = add(ans[i][4], ans[i - 5][1]);
				ans[i][12] = add(ans[i][12], ans[i - 5][3]);
				ans[i][4] = add(ans[i][4], mul(ans[i - 5][4], 4));
				ans[i][12] = add(ans[i][12], mul(ans[i - 5][6], 2));
				ans[i][12] = add(ans[i][12], mul(ans[i - 5][12], 4));
			}
		}

		ll bigans = 2 * (ans[r][1] + ans[r][3] + ans[r][4] + ans[r][6] + ans[r][12]) +
			ans[r + 2][1] + ans[r + 2][3] + ans[r + 2][4] + ans[r + 2][6] + ans[r + 2][12] +
			ans[r - 2][1] + ans[r - 2][3] + ans[r - 2][4] + ans[r - 2][6] + ans[r - 2][12];

		printp("%lld\n", bigans % mod);
	}
}
