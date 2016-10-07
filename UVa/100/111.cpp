#include <bits/stdc++.h>
#include "dp_algs.h"

int main() {
	int N, t;
	cin >> N;
	vi ans(N), sol(N);

	rep(i, 0, N) {
		cin >> t;
		sol[t - 1] = i;
	}
	while (cin >> t) {
		ans[t - 1] = 0;
		rep(i, 1, N) {
			cin >> t;
			ans[t - 1] = i;
		}
		printf("%d\n", sz(lcs(ans, sol)));
	}
}
