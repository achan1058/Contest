#include <bits/stdc++.h>
#include "header.h"

vi cutoff = { 0, 1, 4, 9, 16, 25, 36, 49, 64, 81, 100 };
int main() {
	vvi trees;
	vi tree(3), dist2;
	while (read(tree) && (tree[0] | tree[1] | tree[2]) != 0) {
		dist2.pb(inf);
		rep(i, 0, sz(trees)) {
			int dx = trees[i][0] - tree[0], dy = trees[i][1] - tree[1], dz = trees[i][2] - tree[2];
			int d2 = dx * dx + dy * dy + dz * dz;
			dist2[i] = min(dist2[i], d2);
			dist2[sz(trees)] = min(dist2[sz(trees)], d2);
		}
		trees.pb(tree);
	}

	vi ans(sz(cutoff));
	irep(d, dist2) {
		rrep(i, sz(cutoff) - 1, 0) {
			if (d >= cutoff[i]) {
				ans[i]++;
				break;
			}
		}
	}
	rep(i, 0, sz(ans) - 1)
		printf("%4d", ans[i]);
	print();
}
