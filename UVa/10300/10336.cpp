#include <bits/stdc++.h>
#include "header.h"

int r, c;
vs board;
vi dx = { 1, 0, -1, 0 }, dy = { 0, 1, 0, -1 };
void floodfill(int x0, int y0) {
	queue<pii> q;
	q.push({ x0, y0 });
	char ch = board[x0][y0];
	board[x0][y0] = ' ';

	while (!q.empty()) {
		int x1 = q.front().x, y1 = q.front().y;
		q.pop();

		rep(i, 0, 4) {
			int nx = x1 + dx[i], ny = y1 + dy[i];
			if (nx < 0 || nx >= r || ny < 0 || ny >= c || board[nx][ny] != ch)
				continue;

			board[nx][ny] = ' ';
			q.push({ nx, ny });
		}
	}
}

int main() {
	int N;
	cin >> N;
	rep(X, 1, N + 1) {
		cin >> r >> c;
		map<char, int> result;
		board.resize(r);
		rep(i, 0, r)
			cin >> board[i];
		rep(i, 0, r) {
			rep(j, 0, c) {
				if (board[i][j] != ' ') {
					result[board[i][j]]++;
					floodfill(i, j);
				}
			}
		}

		vector<pair<int, char>> sorted;
		printf("World #%d\n", X);
		irep(pr, result)
			sorted.pb({ -pr.y, pr.x });

		sort(all(sorted));
		irep(pr, sorted)
			printf("%c: %d\n", pr.y, -pr.x);
	}
}
