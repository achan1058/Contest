#include <bits/stdc++.h>
#include "header.h"

vector<int> dx = { 1, 0, -1, 0 }, dy = { 0, 1, 0, -1 };
int floodfill(vs& grid, int x0, int y0, char target = '#') {
	int r = grid.size(), d = dx.size(), count = 1;
	queue<pair<int, int>> q;
	char source = grid[x0][y0];
	grid[x0][y0] = target;
	q.push({ x0, y0 });

	while (!q.empty()) {
		int x = q.front().first, y = q.front().second;
		q.pop();
		for (int k = 0; k < d; k++) {
			int nx = x + dx[k], ny = y + dy[k];
			if (nx < 0 || nx >= r || ny < 0 || ny >= int(grid[nx].size()) || grid[nx][ny] != source)
				continue;

			grid[nx][ny] = target;
			q.push({ nx, ny });
			count++;
		}
	}
	return count;
}

int main() {
	forX() {
		vs grid;
		string s;
		while (getline(cin, s) && s[0] != '_')
			grid.pb(s);
		grid.pb(s);
		drep(i, j, sz(grid), sz(grid[i])) {
			if (grid[i][j] == '*') {
				grid[i][j] = ' ';
				floodfill(grid, i, j);
			}
		}
		irep(g, grid)
			print("%s", g.c_str());
	}
}
