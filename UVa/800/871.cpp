#include <bits/stdc++.h>
#include "header.h"

int r, c;
vector<string> board(30);
vi dx = { 1, 1, 1, 0, -1, -1, -1, 0 }, dy = { -1, 0, 1, 1, 1, 0, -1, -1 };
int floodfill(int x0, int y0) {
	queue<pii> q;
	q.push({ x0, y0 });
	board[x0][y0] = '0';
	int count = 1;
	while (!q.empty()) {
		int x1 = q.front().x, y1 = q.front().y;
		q.pop();
		rep(i, 0, sz(dx)) {
			int nx = x1 + dx[i], ny = y1 + dy[i];
			if (nx < 0 || nx >= r || ny < 0 || ny >= c || board[nx][ny] == '0')
				continue;

			board[nx][ny] = '0';
			q.push({ nx, ny });
			count++;
		}
	}
	return count;
}

int main() {
	int T;
	cin >> T;
	getline(cin, board[0]);
	getline(cin, board[0]);
	for (int X = 0; X < T; X++) {
		int ans = 0;
		r = 0;
		while (getline(cin, board[r]) && board[r] != "")
			r++;
		c = board[0].size();
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				if (board[i][j] == '1')
					ans = max(ans, floodfill(i, j));
			}
		}
		printf("%s%d\n", X == 0 ? "" : "\n", ans);
	}
}
