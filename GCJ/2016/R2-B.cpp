#include <bits/stdc++.h>
#include "header.h"

double probtie(const vd &probs) {
	int n = sz(probs);
	vvd dp = md(n + 1, n + 1, 0);
	double ans = 0;

	dp[0][0] = 1;
	drep(i, j, n, n - i) {
		dp[i + 1][j] += dp[i][j] * probs[i + j];
		dp[i][j + 1] += dp[i][j] * (1 - probs[i + j]);
	}

	return dp[n / 2][n / 2];
}

int main() {
	int n, k;
	forX() {
		cin >> n >> k;
		vd prob(n);
		double ans = 0;
		read(prob);
		sort(all(prob));

		rep(i, 0, k + 1) {
			vd test;
			rep(j, 0, i)
				test.pb(prob[j]);
			rep(j, 1, k - i + 1)
				test.pb(prob[n - j]);
			ans = max(ans, probtie(test));
		}

		printp("%lf\n", ans);
	}
}
