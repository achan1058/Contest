#include <bits/stdc++.h>
#include "header.h"

vector<int> dx = { 1, 0, -1, 0, 1, -1 }, dy = { 0, 1, 0, -1, 1, -1 };
int floodfill(vs& grid, char target = ' ') {
	int r = grid.size(), c = grid[0].size(), d = dx.size();
	queue<pii> q;
	rep(i, 0, r) {
		if (grid[i][0] == 'w') {
			grid[i][0] = target;
			q.push({ i, 0 });
		}
	}

	while (!q.empty()) {
		int x = q.front().first, y = q.front().second;
		q.pop();
		for (int k = 0; k < d; k++) {
			int nx = x + dx[k], ny = y + dy[k];
			if (nx < 0 || nx >= r || ny < 0 || ny >= c || grid[nx][ny] != 'w')
				continue;
			if (ny == c - 1)
				return true;

			grid[nx][ny] = target;
			q.push({ nx, ny });
		}
	}
	return false;
}

int main() {
	int n;
	whileX(cin >> n && n != 0) {
		vs grid(n);
		read(grid);
		print(X, floodfill(grid) ? 'W' : 'B');
	}
}
