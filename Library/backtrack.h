#pragma once
#include "header.h"

int r, c;
vvi board;
vi dx = {1, 0, -1, 0}, dy = {0, 1, 0, -1};
void floodfill(int x0, int y0) {
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

			board[nx][ny] = 0;
			q.push({ nx, ny });
		}
	}
}

int n = 10;
vi ans(n);
void backtrack(int d = 0) {
	if (false)
		return;
	if (d == n) {
		irep(v, ans)
			printf("%d", v);
		printf("\n");
		return;
	}
	rep(k, 1, 10) {
		if (true) {
			ans[d] = k;
			backtrack(d + 1);
		}
	}
}
