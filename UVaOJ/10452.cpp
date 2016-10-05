#include <bits/stdc++.h>
#include "header.h"

int r, c;
vvi board;
vi dx = { 1, 0, 0 }, dy = { 0, 1, -1 };
vs dir = { "forth", "left", "right" };
void floodfill(int x0, int y0) {
	queue<pii> q;
	q.push({ x0, y0 });
	board[x0][y0] = 0;
	while (!q.empty()) {
		int x1 = q.front().x, y1 = q.front().y;
		q.pop();
		rep(i, 0, sz(dx)) {
			int nx = x1 + dx[i], ny = y1 + dy[i];
			if (nx < 0 || nx >= r || ny < 0 || ny >= c || board[nx][ny] <= board[x1][y1] + 1)
				continue;

			board[nx][ny] = board[x1][y1] + 1;
			q.push({ nx, ny });
		}
	}
}

int main() {
	int T;
	char ch;
	string good = "IEHOVA";
	cin >> T;
	for (int X = 0; X < T; X++) {
		cin >> r >> c;
		int x0, y0, x1, y1;
		board = mi(r, c, -1);
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				cin >> ch;
				if (ch == '#') {
					board[i][j] = 0;
					x0 = i;
					y0 = j;
				} else if (ch == '@') {
					board[i][j] = inf;
					x1 = i;
					y1 = j;
				} else {
					for (char t : good) {
						if (ch == t)
							board[i][j] = inf;
					}
				}
			}
		}

		floodfill(x0, y0);
		while (x0 != x1 || y0 != y1) {
			for (int i = 0; i < 3; i++) {
				int nx = x1 - dx[i], ny = y1 - dy[i];
				if (nx >= 0 && nx < r && ny >= 0 && ny < c && board[nx][ny] == board[x1][y1] - 1) {
					x1 = nx;
					y1 = ny;
					printf("%s%s", dir[i].c_str(), x0 == x1 && y0 == y1 ? "\n" : " ");
					break;
				}
			}
		}
	}
}
