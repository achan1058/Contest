#include <bits/stdc++.h>
#include "utils.h"
#include "header.h"

int floodfill(vs& grid, int x0, int y0, char target = '#') {
	int r = grid.size(), d = dx4.size(), count = 1;
	queue<pii> q;
	char source = grid[x0][y0];
	grid[x0][y0] = target;
	q.push({ x0, y0 });

	while (!q.empty()) {
		int x = q.front().first, y = q.front().second;
		q.pop();
		for (int k = 0; k < d; k++) {
			int nx = x + dx4[k], ny = y + dy4[k];
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
			print(g);
	}
}
