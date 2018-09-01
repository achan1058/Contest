#include <bits/stdc++.h>
#include "header.h"

int main() {
	vl ans(10001);
	ans[0] = 1;
	rep(c, 1, 22) {
		int k = c * c * c;
		rep(i, 0, 10001 - k)
			ans[i + k] += ans[i];
	}

	int n;
	while (cin >> n)
		print("%lld", ans[n]);
}
