#include <bits/stdc++.h>
#include "header.h"

int r, c;
vs board(50);
vi dx = { 1, 0, -1, 0 }, dy = { 0, 1, 0, -1 };
void floodfill(int x0, int y0, char s1, char t1, char s2 = 'A', char t2 = 'a') {
	queue<pii> q;
	q.push({ x0, y0 });
	if (board[x0][y0] == s1)
		board[x0][y0] = t1;
	else if (board[x0][y0] == s2)
		board[x0][y0] = t2;
	while (!q.empty()) {
		int x1 = q.front().x, y1 = q.front().y;
		q.pop();
		rep(i, 0, sz(dx)) {
			int nx = x1 + dx[i], ny = y1 + dy[i];
			if (nx < 0 || nx >= r || ny < 0 || ny >= c || (board[nx][ny] != s1 && board[nx][ny] != s2))
				continue;

			if (board[nx][ny] == s1)
				board[nx][ny] = t1;
			else if (board[nx][ny] == s2)
				board[nx][ny] = t2;
			q.push({ nx, ny });
		}
	}
}

int main() {
	int X = 1;
	while (cin >> c >> r && (r | c) != 0) {
		vi rolls;
		rep(i, 0, r)
			cin >> board[i];
		rep(i, 0, r) {
			rep(j, 0, c) {
				if (board[i][j] != '.') {
					int roll = 0;
					floodfill(i, j, '*', '.', 'X', 'x');
					rep(i2, 0, r) {
						rep(j2, 0, c) {
							if (board[i2][j2] == 'x') {
								floodfill(i2, j2, 'x', '.');
								roll++;
							}
						}
					}
					rolls.pb(roll);
				}
			}
		}

		sort(all(rolls));
		printf("Throw %d\n", X);
		rep(i, 0, sz(rolls))
			printf("%s%d", i > 0 ? " " : "", rolls[i]);

		printf("\n\n", X);
		X++;
	}
}
