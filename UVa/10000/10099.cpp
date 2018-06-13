#include <bits/stdc++.h>
#include "shortest_path.h"
#include "header.h"

int main() {
	int v, e;
	whileX(cin >> v >> e && (v | e) != 0) {
		vvi grid = mi(v, v, 0);
		int v1, v2, w;
		rep(i, 0, e) {
			cin >> v1 >> v2 >> w;
			grid[v1 - 1][v2 - 1] = -w;
			grid[v2 - 1][v1 - 1] = -w;
		}
		vvi dist = floyd(grid, true).first;
		cin >> v1 >> v2 >> w;
		int cap = -dist[v1 - 1][v2 - 1] - 1, trips = w / cap;
		if (w % cap)
			trips++;
		print("Scenario #%d", X);
		print("Minimum Number of Trips = %d\n", trips);
	}
}
