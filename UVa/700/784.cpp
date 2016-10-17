#include <bits/stdc++.h>
#include "header.h"

vs grid;
vi dx = { 1, 0, -1, 0 }, dy = { 0, 1, 0, -1 };
void floodfill(int x0, int y0) {
	queue<pii> q;
	q.push({ x0, y0 });
	grid[x0][y0] = '#';
	while (!q.empty()) {
		int x1 = q.front().x, y1 = q.front().y;
		q.pop();
		rep(i, 0, sz(dx)) {
			int nx = x1 + dx[i], ny = y1 + dy[i];
			if (nx < 0 || nx >= sz(grid) || ny < 0 || ny >= sz(grid[nx]) || grid[nx][ny] != ' ')
				continue;

			grid[nx][ny] = '#';
			q.push({ nx, ny });
		}
	}
}

int main() {
	int T, X = 0;
	string s;
	cin >> T;
	getline(cin, s);
	while (getline(cin, s)) {
		if (s[0] == '_') {
			grid.push_back(s);
			for (int i = 0; i < sz(grid); i++) {
				for (int j = 0; j < sz(grid[i]); j++) {
					if (grid[i][j] == '*') {
						floodfill(i, j);
						goto end;
					}
				}
			}
		end:;
			for (int i = 0; i < sz(grid); i++)
				printf("%s\n", grid[i].c_str());
			grid.clear();
			X++;
		} else {
			grid.push_back(s);
		}
	}
}
