#include <bits/stdc++.h>
#include "header.h"

int r, c;
vs board;
vi dx = { 1, 0, -1, 0, 1, 1, -1, -1 }, dy = { 0, 1, 0, -1, 1, -1, -1, 1 };
void floodfill(int x0, int y0) {
	queue<pair<int, int>> q;
	q.push({ x0, y0 });
	board[x0][y0] = '*';

	while (!q.empty()) {
		int x1 = q.front().x, y1 = q.front().y;
		q.pop();

		rep(i, 0, 8) {
			int nx = x1 + dx[i], ny = y1 + dy[i];
			if (nx < 0 || nx >= r || ny < 0 || ny >= c || board[nx][ny] == '*')
				continue;

			board[nx][ny] = '*';
			q.push({ nx, ny });
		}
	}
}

int main() {
	while (cin >> r >> c && r != 0) {
		board.resize(r);
		rep(i, 0, r)
			cin >> board[i];

		int num_pockets = 0;
		rep(i, 0, r) {
			rep(j, 0, c) {
				if (board[i][j] == '@') {
					num_pockets++;
					floodfill(i, j);
				}
			}
		}
		printf("%d\n", num_pockets);
	}
}
