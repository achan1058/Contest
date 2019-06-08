#include <bits/stdc++.h>
#include "header.h"

int sum(vvi& tri) {
	int n = sz(tri), ans = 0;
	rep(i, 1, n) {
		tri[i][0] += tri[i - 1][0];
		tri[i][i] += tri[i - 1][i - 1];
		rep(j, 1, i)
			tri[i][j] += max(tri[i - 1][j - 1], tri[i - 1][j]);
	}
	irep(t, tri[n - 1])
		ans = max(ans, t);
	return ans;
}

int main() {
	fstream fin("Euler/input/67.txt");
	vvi test = {
		{3},
		{7, 4},
		{2, 4, 6},
		{8, 5, 9, 3},
	};

	int t;
	vvi tri(100);
	drep(i, j, 100, i + 1) {
		fin >> t;
		tri[i].pb(t);
	}
	assert(sum(test) == 23);
	printv(sum(tri));
}
