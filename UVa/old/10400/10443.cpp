#include <bits/stdc++.h>
#include "header.h"

vi dx = { 1, 0, -1, 0 }, dy = { 0, 1, 0, -1 };
int main() {
	int r, c, n;
	forX() {
		cin >> r >> c >> n;
		vvs grid = ms(2, r, string(c, ' '));
		read(grid[0]);
		for (int t = 0; t < n; t++) {
			drep(i, j, r, c) {
				for (int k = 0; k < 4; k++) {
					int nx = i + dx[k], ny = j + dy[k];
					if (nx < 0 || nx >= r || ny < 0 || ny >= c)
						continue;
					if (grid[t % 2][i][j] == 'R' && grid[t % 2][nx][ny] == 'P') {
						grid[1 - t % 2][i][j] = 'P';
						break;
					}
					if (grid[t % 2][i][j] == 'P' && grid[t % 2][nx][ny] == 'S') {
						grid[1 - t % 2][i][j] = 'S';
						break;
					}
					if (grid[t % 2][i][j] == 'S' && grid[t % 2][nx][ny] == 'R') {
						grid[1 - t % 2][i][j] = 'R';
						break;
					}
					grid[1 - t % 2][i][j] = grid[t % 2][i][j];
				}
			}
		}

		printX("");
		for (string& s : grid[n % 2])
			printf("%s\n", s.c_str());
	}
}
