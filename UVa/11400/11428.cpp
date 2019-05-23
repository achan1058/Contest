#include <bits/stdc++.h>
#include "header.h"

int main() {
	map<int, pii> ans;
	rrep(x, 101, 1) {
		rep(y, 1, x)
			ans[x * x * x - y * y * y] = { x, y };
	}
	int n;
	while (cin >> n && n != 0) {
		if (ans[n].first == 0)
			print("No solution");
		else
			print("%d %d", ans[n].first, ans[n].second);
	}
}
