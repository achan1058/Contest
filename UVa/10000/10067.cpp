#include <bits/stdc++.h>
#include "header.h"

vvi dx =
{ { 0, 0, 0, 1 },
	{ 0, 0, 0, 9 },
	{ 0, 0, 1, 0 },
	{ 0, 0, 9, 0 },
	{ 0, 1, 0, 0 },
	{ 0, 9, 0, 0 },
	{ 1, 0, 0, 0 },
	{ 9, 0, 0, 0 }
};

int flooddist(vector<vector<vvi>>& grid, vi x0, vi x1) {
	if (x0 == x1) return 0;
	int d = dx.size();
	queue<vi> q;
	grid[x0[0]][x0[1]][x0[2]][x0[3]] = 0;
	q.push(x0);

	while (!q.empty()) {
		vi x = q.front();
		q.pop();
		for (int k = 0; k < d; k++) {
			vi nx = x;
			rep(i, 0, 4)
				nx[i] = (nx[i] + dx[k][i]) % 10;
			if (grid[x[0]][x[1]][x[2]][x[3]] + 1 >= grid[nx[0]][nx[1]][nx[2]][nx[3]])
				continue;
			if (nx == x1)
				return grid[x[0]][x[1]][x[2]][x[3]] + 1;

			grid[nx[0]][nx[1]][nx[2]][nx[3]] = grid[x[0]][x[1]][x[2]][x[3]] + 1;
			q.push(nx);
		}
	}
	return inf;
}

int main() {
	forX() {
		vi start(4), dest(4), forbid(4);
		auto dist = vector<vector<vvi>>(10, vector<vvi>(10, vvi(10, vi(10, inf))));
		read(start);
		read(dest);
		int n;
		cin >> n;
		rep(i, 0, n) {
			read(forbid);
			dist[forbid[0]][forbid[1]][forbid[2]][forbid[3]] = -1;
		}

		int ans = flooddist(dist, start, dest);
		printv(ans == inf ? -1 : ans);
	}
}
