#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi ans(100001, inf);
	ans[0] = 0;
	int t = 1, n;
	rep(i, 1, 9) {
		t *= i;
		rep(j, t, 100001)
			ans[j] = min(ans[j], ans[j - t] + 1);
	}

	while (cin >> n)
		print(ans[n]);
}
