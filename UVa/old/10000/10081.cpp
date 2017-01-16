#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, k;
	while (cin >> k >> n) {
		vvd prob = md(n, k + 1, 0);
		for (int j = 0; j <= k; j++)
			prob[0][j] = 100 / double(k + 1);
		for (int i = 1; i < n; i++) {
			for (int j = 0; j <= k; j++) {
				prob[i][j] = prob[i - 1][j];
				if (j > 0)
					prob[i][j] += prob[i - 1][j - 1];
				if (j < k)
					prob[i][j] += prob[i - 1][j + 1];
				prob[i][j] /= (k + 1);
			}
		}
		double ans = 0;
		for (int j = 0; j <= k; j++)
			ans += prob[n - 1][j];
		printf("%.5lf\n", ans);
	}
}
