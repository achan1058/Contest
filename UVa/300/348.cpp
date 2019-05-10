#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	whileX(cin >> n && n != 0) {
		vi dims(n + 1);
		vvi best = mi(n, n, inf);
		vvs ans = ms(n, n, "");
		rep(i, 0, n) {
			cin >> dims[i] >> dims[i + 1];
			best[i][i] = 0;
			ans[i][i] = "A" + to_string(i + 1);
		}

		// start j, end j + i
		rep(i, 1, n) {
			rep(j, 0, n - i) {
				rep(k, j, i + j) {
					int cur = best[j][k] + best[k + 1][i + j] + dims[j] * dims[k + 1] * dims[i + j + 1];
					if (cur < best[j][i + j]) {
						best[j][i + j] = cur;
						ans[j][i + j] = "(" + ans[j][k] + " x " + ans[k + 1][i + j] + ")";
					}
				}
			}
		}

		printc("%s", ans[0][n - 1].c_str());
	}
}
