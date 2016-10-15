#include <bits/stdc++.h>
#include "header.h"

int r, c;
vvi grid, board;
vi dx = { 1, 0, -1, 0 }, dy = { 0, 1, 0, -1 };

void floodfill(int x0, int y0) {
	vector<queue<tuple<int, int>>> q(10);
	q[grid[x0][y0] % 10].push(make_tuple(x0, y0));
	board[x0][y0] = grid[x0][y0];
	int remain = 1, mx = 0;

	while (remain > 0) {
		while (q[mx % 10].empty())
			mx++;

		int x1 = get<0>(q[mx % 10].front()), y1 = get<1>(q[mx % 10].front());
		q[mx % 10].pop();
		remain--;

		rep(i, 0, sz(dx)) {
			int nx = x1 + dx[i], ny = y1 + dy[i];
			if (nx < 0 || nx >= r || ny < 0 || ny >= c || board[nx][ny] <= board[x1][y1] + grid[nx][ny])
				continue;

			board[nx][ny] = board[x1][y1] + grid[nx][ny];
			q[(board[x1][y1] + grid[nx][ny]) % 10].push(make_tuple(nx, ny));
			remain++;
		}
	}
}

int main() {
	int N;
	cin >> N;
	rep(X, 0, N) {
		cin >> r >> c;
		grid = mi(r, c, 0);
		board = mi(r, c, inf);
		fori(b, grid) {
			fori(v, b)
				cin >> v;
		}

		floodfill(0, 0);
		printf("%d\n", board[r - 1][c - 1]);
	}
}
