#include <bits/stdc++.h>
#include "combinatorics.h"

int main() {
	mod = 10056;
	int N, n;
	vi ans(1001);
	vvi pas = binomialTable<int>(1000, 10056);
	ans[0] = ans[1] = 1;
	cin >> N;
	rep(i, 2, 1001) {
		rep(j, 0, i)
			ans[i] = add(ans[i], mul(pas[i][i - j], ans[j]));
	}
	rep(X, 1, N + 1) {
		cin >> n;
		printf("Case %d: %d\n", X, ans[n]);
	}
}
