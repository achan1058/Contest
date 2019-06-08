#include <bits/stdc++.h>
#include "header.h"

vector<int> dx = { 1, 0, -1, 0 }, dy = { 0, 1, 0, -1 };
int flooddist(const vs& board) {
	int n = sz(board), d = dx.size(), ans = 0;
	queue<pair<int, int>> q;
	vvi grid = mi(n, n, inf);
	drep(i, j, n, n) {
		if (board[i][j] == '3') {
			grid[i][j] = 0;
			q.push({ i, j });
		}
	}

	while (!q.empty()) {
		int x = q.front().first, y = q.front().second;
		q.pop();
		if (board[x][y] == '1')
			ans = max(ans, grid[x][y]);
		for (int k = 0; k < d; k++) {
			int nx = x + dx[k], ny = y + dy[k];
			if (nx < 0 || nx >= n || ny < 0 || ny >= n || grid[x][y] + 1 >= grid[nx][ny])
				continue;

			grid[nx][ny] = grid[x][y] + 1;
			q.push({ nx, ny });
		}
	}
	return ans;
}

int main() {
	int n;
	whileX(cin >> n) {
		vs grid(n);
		read(grid);
		printd(flooddist(grid));
	}
}
