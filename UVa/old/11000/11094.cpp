#include <bits/stdc++.h>
#include "header.h"

int floodfill(vs& grid, int x0, int y0) {
	vi dx = { 1, 0, -1, 0 }, dy = { 0, 1, 0, -1 };
	int r = sz(grid), c = sz(grid[0]), count = 1;
	queue<pii> q;
	char land = grid[x0][y0];
	q.push({ x0, y0 });
	grid[x0][y0] = ' ';

	while (!q.empty()) {
		int x1 = q.front().x, y1 = q.front().y;
		q.pop();
		rep(i, 0, sz(dx)) {
			int nx = x1 + dx[i], ny = y1 + dy[i];
			if (ny == -1)
				ny = c - 1;
			else if (ny == c)
				ny = 0;
			if (nx < 0 || nx >= r || grid[nx][ny] != land)
				continue;

			grid[nx][ny] = ' ';
			count++;
			q.push({ nx, ny });
		}
	}
	return count;
}

int main() {
	int r, c;
	while (cin >> r >> c) {
		int x0, y0;
		vs board(r);
		read(board);
		cin >> x0 >> y0;

		char land = board[x0][y0];
		floodfill(board, x0, y0);
		int best = 0;

		drep(i, j, r, c) {
			if (board[i][j] == land)
				best = max(best, floodfill(board, i, j));
		}
		printf("%d\n", best);
	}
}
