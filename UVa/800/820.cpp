#include <bits/stdc++.h>
#include "max_flow.h"
#include "header.h"

int main() {
	int n;
	whileX(cin >> n && n != 0) {
		int s, t, e, v1, v2, w;
		cin >> s >> t >> e;
		vvi grid = mi(n, n, 0);
		rep(i, 0, e) {
			cin >> v1 >> v2 >> w;
			grid[v1 - 1][v2 - 1] += w;
			grid[v2 - 1][v1 - 1] += w;
		}
		print("Network %d", X);
		print("The bandwidth is %d.\n", get<0>(pushRelabel(grid, s - 1, t - 1)));
	}
}
