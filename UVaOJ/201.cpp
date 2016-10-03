#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, r, c, e, X = 1;
	char x;

	while (cin >> n >> e) {
		vvb hor = mb(n, n, false), ver = mb(n, n, false);
		bool printed = false;
		rep(i, 0, e) {
			cin >> x >> r >> c;
			if (x == 'H')
				hor[r - 1][c - 1] = true;
			if (x == 'V')
				ver[c - 1][r - 1] = true;
		}

		if (X > 1)
			printf("\n**********************************\n\n");

		printf("Problem #%d\n\n", X);

		rep(k, 1, n) {
			int total = 0;
			rep(i, 0, n - k) {
				rep(j, 0, n - k) {
					bool good = true;
					rep(d, 0, k) {
						if (!hor[i][j + d] || !hor[i + k][j + d] || !ver[i + d][j] || !ver[i + d][j + k]) {
							good = false;
							break;
						}
					}
					if (good)
						total++;
				}
			}

			if (total > 0) {
				printf("%d square (s) of size %d\n", total, k);
				printed = true;
			}
		}

		if (!printed)
			printf("No completed squares can be found.\n");

		X++;
	}
}
