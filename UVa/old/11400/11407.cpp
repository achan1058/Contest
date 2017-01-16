#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi ans(10001, inf);
	int n;
	ans[0] = 0;
	rep(i, 1, 101) {
		rep(j, 0, 10001 - i * i)
			ans[i * i + j] = min(ans[i * i + j], ans[j] + 1);
	}
	forX() {
		cin >> n;
		printf("%d\n", ans[n]);
	}
}
