#include <bits/stdc++.h>
#include "header.h"

int main() {
	vl ans(77);
	ans[1] = ans[2] = 1;
	rep(i, 3, 77)
		ans[i] = ans[i - 2] + ans[i - 3];

	int n;
	while (cin >> n) {
		printf("%lld\n", ans[n] + ans[n - 1]);
	}
}
