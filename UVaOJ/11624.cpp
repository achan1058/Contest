#include <bits/stdc++.h>
#include "header.h"

int r, c;
vi dx = { 1, 0, -1, 0 }, dy = { 0, 1, 0, -1 };
void floodfill(vector<pii>& start, vvi& board) {
	queue<pii> q;
	for (auto& p : start) {
		q.push({ p.x, p.y });
		board[p.x][p.y] = 0;
	}
	while (!q.empty()) {
		while (!q.empty()) {
			int x1 = q.front().x, y1 = q.front().y;
			q.pop();
			rep(i, 0, sz(dx)) {
				int nx = x1 + dx[i], ny = y1 + dy[i];
				if (nx < 0 || nx >= r || ny < 0 || ny >= c || board[nx][ny] != inf)
					continue;

				board[nx][ny] = board[x1][y1] + 1;
				q.push({ nx, ny });
			}
		}
	}
}

int main() {
	int T;
	char ch;
	cin >> T;
	for (int X = 0; X < T; X++) {
		cin >> r >> c;
		vvi jb = mi(r, c, inf);
		vvi fb = mi(r, c, inf);
		vector<pii> jstart, fstart;
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				cin >> ch;
				if (ch == '#') {
					jb[i][j] = -1;
					fb[i][j] = -1;
				} else if (ch == 'J')
					jstart.push_back({ i, j });
				else if (ch == 'F')
					fstart.push_back({ i, j });
			}
		}

		floodfill(jstart, jb);
		floodfill(fstart, fb);

		int mint = inf;
		for (int i = 0; i < r; i++) {
			if (jb[i][0] >= 0 && fb[i][0] > jb[i][0])
				mint = min(mint, jb[i][0]);
			if (jb[i][c - 1] >= 0 && fb[i][c - 1] > jb[i][c - 1])
				mint = min(mint, jb[i][c - 1]);
		}

		for (int j = 0; j < c; j++) {
			if (jb[0][j] >= 0 && fb[0][j] > jb[0][j])
				mint = min(mint, jb[0][j]);
			if (jb[r - 1][j] >= 0 && fb[r - 1][j] > jb[r - 1][j])
				mint = min(mint, jb[r - 1][j]);
		}

		if (mint == inf)
			printf("IMPOSSIBLE\n");
		else
			printf("%d\n", mint + 1);
	}
}
