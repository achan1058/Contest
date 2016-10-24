#include <bits/stdc++.h>
#include "header.h"

void floodfill(vvi& grid, vector<pii>& start) {
	vi dx = { 1, 0, -1, 0 }, dy = { 0, 1, 0, -1 };
	int r = sz(grid), c = sz(grid[0]);
	queue<pii> q;
	for (auto& p : start) {
		q.push({ p.x, p.y });
		grid[p.x][p.y] = 0;
	}
	while (!q.empty()) {
		int x = q.front().x, y = q.front().y;
		q.pop();
		rep(i, 0, sz(dx)) {
			int nx = x + dx[i], ny = y + dy[i];
			if (nx < 0 || nx >= r || ny < 0 || ny >= c || grid[nx][ny] != inf)
				continue;

			grid[nx][ny] = grid[x][y] + 1;
			q.push({ nx, ny });
		}
	}
}

int main() {
	int r, c;
	char ch;
	forX() {
		cin >> r >> c;
		vvi jb = mi(r, c, inf);
		vvi fb = mi(r, c, inf);
		vector<pii> jstart, fstart;
		
		drep(i, j, r, c) {
			cin >> ch;
			if (ch == '#') {
				jb[i][j] = -1;
				fb[i][j] = -1;
			} else if (ch == 'J')
				jstart.push_back({ i, j });
			else if (ch == 'F')
				fstart.push_back({ i, j });
		}

		floodfill(jb, jstart);
		floodfill(fb, fstart);

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
