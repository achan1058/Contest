#include <bits/stdc++.h>
#include "header.h"

vi dx = { 1, 1, 1, 0, -1, -1, -1, 0 }, dy = { 1, 0, -1, -1, -1, 0, 1, 1 };
int main() {
	int r, c;
	whileX(cin >> r >> c && (r | c) != 0) {
		vs grid(r);
		read(grid);
		drep(i, j, r, c) {
			if (grid[i][j] == '*')
				continue;
			grid[i][j] = '0';
			rep(k, 0, 8) {
				int nx = i + dx[k], ny = j + dy[k];
				if (nx >= 0 && nx < r && ny >= 0 && ny < c && grid[nx][ny] == '*')
					grid[i][j]++;
			}
		}
		printX("Field #%d:\n", X);
		irep(s, grid)
			printf("%s\n", s.c_str());
	}
}
