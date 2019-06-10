#include <bits/stdc++.h>
#include "utils.h"
#include "header.h"

int main() {
	int r, c;
	whileX(cin >> r >> c && (r | c) != 0) {
		vs grid(r);
		read(grid);
		drep(i, j, r, c) {
			int count = 0;
			if (grid[i][j] == '*')
				continue;
			rep(k, 0, 8) {
				int nx = i + dx8[k], ny = j + dy8[k];
				if (nx < 0 || nx >= r || ny < 0 || ny >= c)
					continue;
				if (grid[nx][ny] == '*')
					count++;
			}
			grid[i][j] = count + '0';
		}
		printX("Field #%d:\n", X);
		print(grid, true);
	}
}
