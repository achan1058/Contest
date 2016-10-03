#include <bits/stdc++.h>
#include "header.h"

int n;
vs board;
vi dx = { -1, 0, 1, -1, 0, 1 }, dy = { -1, -1, 0, 0, 1, 1 };
bool floodfill(int x0, int y0) {
	queue<pii> q;
	q.push({ x0, y0 });
	board[x0][y0] = ' ';

	while (!q.empty()) {
		int x1 = q.front().x, y1 = q.front().y;
		q.pop();

		if (x1 == n - 1)
			return true;
		rep(i, 0, sz(dx)) {
			int nx = x1 + dx[i], ny = y1 + dy[i];
			if (nx < 0 || nx >= n || ny < 0 || ny >= n || board[nx][ny] != 'b')
				continue;

			board[nx][ny] = ' ';
			q.push({ nx, ny });
		}
	}
	return false;
}

int main() {
	int X = 1;
	while (cin >> n && n != 0) {
		bool white_wins = true;
		board.resize(n);
		irep(s, board)
			cin >> s;
		rep(i, 0, n) {
			if (board[0][i] == 'b' && floodfill(0, i)) {
				white_wins = false;
				break;
			}
		}
		printf("%d %c\n", X, white_wins ? 'W' : 'B');
		X++;
	}
}
