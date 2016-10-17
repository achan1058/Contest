#include <bits/stdc++.h>
#include "header.h"

int n;
vs board;
vi dx = { -1, -1, -1, 0, 1, 1, 1, 0 }, dy = { -1, 0, 1, 1, 1, 0, -1, -1 };
void floodfill(int x0, int y0) {
	queue<pii> q;
	q.push({ x0, y0 });
	board[x0][y0] = '0';

	while (!q.empty()) {
		int x1 = q.front().x, y1 = q.front().y;
		q.pop();

		rep(i, 0, sz(dx)) {
			int nx = x1 + dx[i], ny = y1 + dy[i];
			if (nx < 0 || nx >= n || ny < 0 || ny >= n || board[nx][ny] == '0')
				continue;

			board[nx][ny] = '0';
			q.push({ nx, ny });
		}
	}
}

int main() {
	int X = 1;
	while (cin >> n) {
		int count = 0;
		board = vs(n);

		rep(i, 0, n)
			cin >> board[i];
		rep(i, 0, n)
			rep(j, 0, n)
			if (board[i][j] == '1') {
				floodfill(i, j);
				count++;
			}
		printf("Image number %d contains %d war eagles.\n", X, count);
		X++;
	}
}
