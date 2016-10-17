#include <bits/stdc++.h>
#include "header.h"

vi dx = { -1, -1, -1, 0, 1, 1, 1, 0 }, dy = { -1, 0, 1, 1, 1, 0, -1, -1 };
int main() {
	int m, n, X = 1;
	char c;
	while (cin >> m >> n && (m | n) != 0) {
		vvi field = mi(m + 2, n + 2, 0);
		printf("%sField #%d:\n", X > 1 ? "\n" : "", X);

		rep(i, 1, m + 1) {
			rep(j, 1, n + 1) {
				cin >> c;
				if (c == '*') {
					field[i][j] = -100;
					rep(k, 0, 8)
						field[i + dx[k]][j + dy[k]]++;
				}
			}
		}

		rep(i, 1, m + 1) {
			rep(j, 1, n + 1) {
				if (field[i][j] < 0)
					printf("*");
				else
					printf("%d", field[i][j]);
			}
			printf("\n");
		}
		X++;
	}
}
