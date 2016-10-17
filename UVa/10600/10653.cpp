#include <bits/stdc++.h>
#include "header.h"

int r, c;
vvi board;
vi dx = { 1, 0, -1, 0 }, dy = { 0, 1, 0, -1 };
int floodfill(int x0, int y0, int tx, int ty) {
	queue<pii> q;
	q.push({ x0, y0 });
	board[x0][y0] = 0;
	while (!q.empty()) {
		int x1 = q.front().x, y1 = q.front().y;
		q.pop();
		rep(i, 0, sz(dx)) {
			int nx = x1 + dx[i], ny = y1 + dy[i];
			if (nx < 0 || nx >= r || ny < 0 || ny >= c || board[nx][ny] == 0)
				continue;
			if (nx == tx && ny == ty)
				return board[x1][y1] + 1;
			if (board[nx][ny] == -1 || board[x1][y1] + 1 >= board[nx][ny])
				continue;

			board[nx][ny] = board[x1][y1] + 1;
			q.push({ nx, ny });
		}
	}
}

int main() {
	int nr, cr, nc, cc;
	while (cin >> r >> c && (r | c) != 0) {
		board = mi(r, c, inf);
		cin >> nr;
		rep(i, 0, nr) {
			cin >> cr >> nc;
			rep(j, 0, nc) {
				cin >> cc;
				board[cr][cc] = -1;
			}
		}
		cin >> nr >> nc >> cr >> cc;
		printf("%d\n", floodfill(nr, nc, cr, cc));
	}
}
