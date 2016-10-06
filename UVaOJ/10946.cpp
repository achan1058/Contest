#include <bits/stdc++.h>
#include "header.h"

int n, m;
vs board;
vi dx = { 1, 0, -1, 0 }, dy = { 0, 1, 0, -1 };
int floodfill(int x0, int y0) {
	queue<pii> q;
	q.push({ x0, y0 });
	char c = board[x0][y0];
	int num = 1;
	board[x0][y0] = '.';

	while (!q.empty()) {
		int x1 = q.front().x, y1 = q.front().y;
		q.pop();

		rep(i, 0, sz(dx)) {
			int nx = x1 + dx[i], ny = y1 + dy[i];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m || board[nx][ny] != c)
				continue;

			board[nx][ny] = '.';
			num++;
			q.push({ nx, ny });
		}
	}
	return num;
}

int main() {
	int X = 1;
	while (cin >> n >> m && (n | m) != 0) {
		board.resize(n);
		vector<pair<int, char>> out;
		irep(s, board)
			cin >> s;
		rep(i, 0, n) {
			rep(j, 0, m) {
				if (board[i][j] != '.') {
					char c = board[i][j];
					out.pb({ -floodfill(i, j), c });
				}
			}
		}
		sort(all(out));
		printf("Problem %d:\n", X);
		irep(v, out)
			printf("%c %d\n", v.y, -v.x);
		X++;
	}
}
