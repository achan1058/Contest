#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, m, l, r;
	vi ans;
	cin >> n >> m;
	vb points(m + 1);
	rep(i, 0, n) {
		cin >> l >> r;
		rep(j, l, r + 1)
			points[j] = true;
	}
	rep(i, 1, m + 1) {
		if (!points[i])
			ans.pb(i);
	}
	print(sz(ans));
	rep(i, 0, sz(ans))
		printf("%d%c", ans[i], i == sz(ans) - 1 ? '\n' : ' ');
}
