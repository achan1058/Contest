#include <bits/stdc++.h>
#include "util.h"

int r, c;
vvi grid, board;
vi dx = { 1, 0, -1, 0 }, dy = { 0, 1, 0, -1 };

void floodfill(int x0, int y0) {
	priority_queue<tuple<int, int, int>> q;
	q.push(make_tuple(-grid[x0][y0], x0, y0));
	board[x0][y0] = grid[x0][y0];
	while (!q.empty()) {
		int v1 = -get<0>(q.top()), x1 = get<1>(q.top()), y1 = get<2>(q.top());
		q.pop();

		rep(i, 0, sz(dx)) {
			int nx = x1 + dx[i], ny = y1 + dy[i];
			if (nx < 0 || nx >= r || ny < 0 || ny >= c || board[nx][ny] <= v1 + grid[nx][ny])
				continue;

			board[nx][ny] = v1 + grid[nx][ny];
			q.push(make_tuple(-board[nx][ny], nx, ny));
		}
	}
}

int main() {
	fstream in("Euler/input/83.txt");
	char ch;
	r = c = 80;
	grid = mi(r, c, 0);
	board = mi(r, c, inf);

	rep(i, 0, r) {
		rep(j, 0, c) {
			if (j > 0)
				in >> ch;
			in >> grid[i][j];
		}
	}

	floodfill(0, 0);
	printf("%d\n", board[r - 1][c - 1]);
}
