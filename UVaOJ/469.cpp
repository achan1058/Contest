#include <bits/stdc++.h>
#include "header.h"

int r, c;
vs board;
vi dx = { 1, 0, -1, 0, 1, 1, -1, -1 }, dy = { 0, 1, 0, -1, 1, -1, -1, 1 };
int floodfill(int x0, int y0) {
	queue<pii> q;
	q.push({ x0, y0 });
	board[x0][y0] = 'R';
	int total = 1;

	while (!q.empty()) {
		int x1 = q.front().x, y1 = q.front().y;
		q.pop();

		rep(i, 0, sz(dx)) {
			int nx = x1 + dx[i], ny = y1 + dy[i];
			if (nx < 0 || nx >= r || ny < 0 || ny >= c || board[nx][ny] != 'W')
				continue;

			total++;
			board[nx][ny] = 'R';
			q.push({ nx, ny });
		}
	}
	return total;
}

int main() {
	int N;
	string s;
	cin >> N;
	getline(cin, s);
	getline(cin, s);
	rep(X, 0, N) {
		board.clear();
		printf("%s", X > 0 ? "\n" : "");
		while (getline(cin, s) && (s[0] == 'W' || s[0] == 'L'))
			board.pb(s);

		r = sz(board);
		c = sz(board[0]);
		vvi bc = mi(r, c, 0);
		rep(i, 0, r) {
			rep(j, 0, c) {
				if (board[i][j] == 'W') {
					int t = floodfill(i, j);
					rep(x, 0, r) {
						rep(y, 0, c) {
							if (board[x][y] == 'R') {
								board[x][y] = 'L';
								bc[x][y] = t;
							}
						}
					}
				}
			}
		}

		do {
			stringstream ss;
			int x, y;
			ss << s;
			ss >> x >> y;
			printf("%d\n", bc[x - 1][y - 1]);
		} while (getline(cin, s) && s != "");
	}
}
