#include <bits/stdc++.h>
#include "header.h"

int r, c;
char land;
vs board;
vi dx = { 1, 0, -1, 0 }, dy = { 0, 1, 0, -1 };
int floodfill(int x0, int y0) {
	queue<pii> q;
	int count = 1;
	q.push({ x0, y0 });
	board[x0][y0] = ' ';
	while (!q.empty()) {
		int x1 = q.front().x, y1 = q.front().y;
		q.pop();
		rep(i, 0, sz(dx)) {
			int nx = x1 + dx[i], ny = y1 + dy[i];
			if (ny == -1)
				ny = c - 1;
			else if (ny == c)
				ny = 0;
			if (nx < 0 || nx >= r || board[nx][ny] != land)
				continue;

			board[nx][ny] = ' ';
			count++;
			q.push({ nx, ny });
		}
	}
	return count;
}

int main() {
	while (cin >> r >> c) {
		int x0, y0;
		board = vs(r);
		for (int i = 0; i < r; i++)
			cin >> board[i];
		cin >> x0 >> y0;
		land = board[x0][y0];
		floodfill(x0, y0);
		int best = 0;

		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				if (board[i][j] == land)
					best = max(best, floodfill(i, j));
			}
		}
		printf("%d\n", best);
	}
}
