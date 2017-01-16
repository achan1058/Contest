#include <bits/stdc++.h>
#include "header.h"

inline int curHeightOdd(int cols, int height) {
	return max(0, height - cols / 2 * 2);
}

inline int curHeightEven(int cols, int height) {
	return max(0, height - (cols - 1) / 2 * 2);
}

int main() {
	// num cols, max height, num rooks
	vector<vvl> dpOdd = vector<vvl>(31, ml(31, 31, 0)), dpEven = vector<vvl>(31, ml(31, 31, 0));
	int n, k;
	for (int i = 0; i <= 30; i++) {
		for (int j = 0; j <= 30; j++)
			dpOdd[i][j][0] = dpEven[i][j][0] = 1;
	}
	for (int i = 1; i <= 30; i++) {
		for (int j = 0; j <= 30; j++) {
			for (int k = 1; k <= 30; k++) {
				dpEven[i][j][k] = dpEven[i - 1][j][k];
				dpOdd[i][j][k] = dpOdd[i - 1][j][k];
				if (j > 0) {
					dpEven[i][j][k] += curHeightEven(i, j) * dpEven[i - 1][j - 1][k - 1];
					dpOdd[i][j][k] += curHeightOdd(i, j) * dpOdd[i - 1][j - 1][k - 1];
				}

			}
		}
	}

	while (cin >> n >> k && (n | k) != 0) {
		ll total = 0;
		if (n % 2 == 1) {
			for (int i = 0; i <= k; i++) {
				if (i > 30 || k - i > 30)
					continue;
				total += dpOdd[n][n][i] * dpEven[n - 1][n - 1][k - i];
			}
		} else {
			for (int i = 0; i <= k; i++) {
				if (i > 30 || k - i > 30)
					continue;
				total += dpEven[n][n - 1][i] * dpEven[n][n - 1][k - i];
			}
		}
		printf("%lld\n", total);
	}
}
