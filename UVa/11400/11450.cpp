#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int m, n;
		cin >> m >> n;
		vvb good = mb(n + 1, m + 1, false);
		good[0][0] = true;
		rep(i, 0, n) {
			int v, c;
			cin >> v;
			rep(j, 0, v) {
				cin >> c;
				rep(k, 0, m - c + 1)
					good[i + 1][k + c] = good[i + 1][k + c] || good[i][k];
			}
		}
		bool found = false;
		rrep(j, m, 0) {
			if (good[n][j]) {
				printd(j);
				found = true;
				break;
			}
		}
		if (!found)
			print("no solution");
	}
}
