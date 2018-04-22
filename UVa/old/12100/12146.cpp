#include <bits/stdc++.h>
#include "header.h"

int dp(vi& v) {
	v.pb(0);
	v.pb(0);
	v[2] += v[0];
	rep(i, 3, sz(v))
		v[i] += max(v[i - 2], v[i - 3]);
	return v.back();
}

int main() {
	int r, c;
	while (cin >> r >> c && (r | c) != 0) {
		vvi grid = mi(r, c, 0);
		vi row_max(r);
		read(grid);
		rep(i, 0, r) {
			row_max[i] = dp(grid[i]);
		}

		printf("%d\n", dp(row_max));
	}
}
