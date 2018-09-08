#include <bits/stdc++.h>
#include "header.h"

vector<int> dx = { 1, -1, 0, 0, 0, 0 }, dy = { 0, 0, 1, -1, 0, 0 }, dz = { 0, 0, 0, 0, 1, -1 };
int flooddist(vector<vvi>& grid, int x0, int y0, int z0, int x1, int y1, int z1) {
	if (x0 == x1 && y0 == y1 && z0 == z1) return 0;
	int r = grid.size(), c = grid[0].size(), h = grid[0][0].size(), d = dx.size();
	queue<vi> q;
	grid[x0][y0][z0] = 0;
	q.push({ x0, y0, z0 });

	while (!q.empty()) {
		int x = q.front()[0], y = q.front()[1], z = q.front()[2];
		q.pop();
		for (int k = 0; k < d; k++) {
			int nx = x + dx[k], ny = y + dy[k], nz = z + dz[k];
			if (nx < 0 || nx >= r || ny < 0 || ny >= c || nz < 0 || nz >= h || grid[x][y][z] + 1 >= grid[nx][ny][nz])
				continue;
			if (nx == x1 && ny == y1 && nz == z1)
				return grid[x][y][z] + 1;

			grid[nx][ny][nz] = grid[x][y][z] + 1;
			q.push({ nx, ny, nz });
		}
	}
	return inf;
}

int main() {
	int r, c, h, x0, y0, z0, x1, y1, z1;
	char ch;
	while (cin >> r >> c >> h && (r | c | h) != 0) {
		vector<vvi> grid = vector<vvi>(r, mi(c, h, inf));
		drep(i, j, r, c) {
			rep(k, 0, h) {
				cin >> ch;
				if (ch == 'S') {
					x0 = i;
					y0 = j;
					z0 = k;
				} else if (ch == 'E') {
					x1 = i;
					y1 = j;
					z1 = k;
				} else if (ch == '#') {
					grid[i][j][k] = -1;
				}
			}
		}
		int ans = flooddist(grid, x0, y0, z0, x1, y1, z1);
		if (ans == inf)
			print("Trapped!");
		else
			print("Escaped in %d minute(s).", ans);
	}
}
