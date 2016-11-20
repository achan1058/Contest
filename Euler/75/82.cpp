#include <bits/stdc++.h>
#include "util.h"

int r, c;
vvi grid, board;
vi dx = { 1, 0, -1 }, dy = { 0, 1, 0 };

void floodfill(int y0) {
	priority_queue<tuple<int, int, int>> q;
	rep(x, 0, r) {
		q.push(make_tuple(-grid[x][y0], x, y0));
		board[x][y0] = grid[x][y0];
	}
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
	fstream in("Euler/input/82.txt");
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

	int mn = inf;
	floodfill(0);

	rep(x, 0, r)
		mn = min(mn, board[x][c - 1]);
	printf("%d\n", mn);
}
