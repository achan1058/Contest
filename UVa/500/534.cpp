#include <bits/stdc++.h>
#include "point.h"
#include "shortest_path.h"
#include "header.h"

int main() {
	int n;
	whileX(cin >> n && n != 0) {
		vvd grid = md(n, n, inf);
		vector<ptd> stones(n);
		read(stones);
		drep(i, j, n, i) {
			double d = stones[i].dist(stones[j]);
			grid[i][j] = grid[j][i] = d;
		}

		double ans = floyd(grid, true).x[0][1];
		print("Scenario #%d", X);
		print("Frog Distance = %.3f\n", ans);
	}
}
