#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N, c, n, t;
	cin >> N;
	rep(X, 0, N) {
		cin >> n >> c;
		vvb good = mb(c + 1, n + 1, false);
		good[0][0] = true;

		rep(i, 0, c) {
			cin >> t;
			vi v(t);
			irep(r, v)
				cin >> r;
			rep(j, 0, n + 1) {
				irep(r, v) {
					if (j + r <= n)
						good[i + 1][j + r] = (good[i + 1][j + r] || good[i][j]);
				}
			}
		}
		bool solution = false;
		rrep(j, n, 0) {
			if (good[c][j]) {
				printf("%d\n", j);
				solution = true;
				break;
			}
		}
		if (!solution)
			printf("no solution\n");
	}
}
