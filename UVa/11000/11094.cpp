#include <bits/stdc++.h>
#include "header.h"

vector<int> dx = { 1, 0, -1, 0 }, dy = { 0, 1, 0, -1 };
template<class T, class U>
int floodfill(vector<T>& grid, int x0, int y0, U target = 0) {
	int r = grid.size(), c = grid[0].size(), d = dx.size(), count = 1;
	queue<pair<int, int>> q;
	U source = grid[x0][y0];
	grid[x0][y0] = target;
	q.push({ x0, y0 });

	while (!q.empty()) {
		int x = q.front().first, y = q.front().second;
		q.pop();
		for (int k = 0; k < d; k++) {
			int nx = x + dx[k], ny = (y + dy[k] + c) % c;
			if (nx < 0 || nx >= r || ny < 0 || ny >= c || grid[nx][ny] != source)
				continue;

			grid[nx][ny] = target;
			q.push({ nx, ny });
			count++;
		}
	}
	return count;
}

int main() {
	int r, c, x, y;
	while (cin >> r >> c) {
		vs grid(r);
		read(grid);
		cin >> x >> y;
		char land = grid[x][y];
		floodfill(grid, x, y, ' ');

		int ans = 0;
		drep(i, j, r, c) {
			if (grid[i][j] == land)
				ans = max(ans, floodfill(grid, i, j, ' '));
		}
		printd(ans);
	}
}
