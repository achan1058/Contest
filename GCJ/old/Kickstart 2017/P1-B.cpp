#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n, m;
		cin >> n >> m;
		vvd prob = md(n + 1, m + 1, 0);
		prob[0][0] = 1;
		drep(i, j, n + 1, m + 1) {
			if (i <= j && j != 0)
				continue;
			int remn = n - i, remm = m - j, remt = remn + remm;
			if (i < n)
				prob[i + 1][j] += prob[i][j] * remn / remt;
			if (j < m)
				prob[i][j + 1] += prob[i][j] * remm / remt;
		}

		printp("%.8f\n", prob[n][m]);
	}
}