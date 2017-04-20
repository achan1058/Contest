#include <bits/stdc++.h>
#include "header.h"

inline int dist2(int dx, int dy, int dz) {
	return dx * dx + dy * dy + dz * dz;
}

int main() {
	vi d2 = { 1, 4, 9, 16, 25, 36, 49, 64, 81, 100 };
	vi count(sz(d2));
	vvi trees;
	int x, y, z;
	while (cin >> x >> y >> z && (x | y | z) != 0)
		trees.pb({ x, y, z });
	rep(i, 0, sz(trees)) {
		int md = inf;
		rep(j, 0, sz(trees)) {
			if (i == j)
				continue;
			md = min(md, dist2(trees[j][0] - trees[i][0], trees[j][1] - trees[i][1], trees[j][2] - trees[i][2]));
		}
		rep(j, 0, sz(d2)) {
			if (md < d2[j]) {
				count[j]++;
				break;
			}
		}
	}
	irep(v, count)
		printf("%4d", v);
	printf("\n");
}
