#include <bits/stdc++.h>
#include "header.h"

int main() {
	int k, n;
	while (cin >> k >> n) {
		if (k == 0) {
			printf("100.00000\n");
			continue;
		}
		vvd prob = md(n, k + 1, 0);
		prob[0] = vd(k + 1, 100. / (k + 1));
		rep(i, 0, n - 1) {
			prob[i + 1][0] = (prob[i][0] + prob[i][1]) / (k + 1);
			prob[i + 1][k] = (prob[i][k] + prob[i][k - 1]) / (k + 1);
			rep(j, 1, k)
				prob[i + 1][j] = (prob[i][j - 1] + prob[i][j] + prob[i][j + 1]) / (k + 1);
		}

		double ans = 0;
		rep(j, 0, k + 1)
			ans += prob[n - 1][j];
		printf("%.5f\n", ans);
	}
}
