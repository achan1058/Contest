#include <bits/stdc++.h>
#include "header.h"

vi dx = { 1, 0, -1, 0 }, dy = { 0, 1, 0, -1 };
vvi flooddist(const vs& strs) {
	int r = strs.size(), c = strs[0].size(), d = dx.size(), count = 1;
	vvi grid = mi(r, c, inf);
	queue<pair<int, int>> q;
	drep(i, j, r, c) {
		if (strs[i][j] == '3') {
			grid[i][j] = 0;
			q.push({ i, j });
		}
	}

	while (!q.empty()) {
		int x = q.front().first, y = q.front().second;
		q.pop();
		for (int k = 0; k < d; k++) {
			int nx = x + dx[k], ny = y + dy[k];
			if (nx < 0 || nx >= r || ny < 0 || ny >= c || grid[x][y] + 1 >= grid[nx][ny])
				continue;

			grid[nx][ny] = grid[x][y] + 1;
			q.push({ nx, ny });
		}
	}

	return grid;
}

int main() {
	int n;
	while(cin >> n) {
		vs strs(n);
		read(strs);
		vvi grid = flooddist(strs);
		int ans = 0;

		drep(i, j, n, n) {
			if (strs[i][j] == '1')
				ans = max(ans, grid[i][j]);
		}
		printf("%d\n", ans);
	}
}
