#include <bits/stdc++.h>
#include "utils.h"
#include "header.h"

vs grid;
int n, best, cur = 0;
void next(int& x, int& y) {
	do {
		y++;
		if (y == n) {
			x++;
			y = 0;
			if (x == n)
				return;
		}
	} while (grid[x][y] != '.');
}

void backtrack(int x = 0, int y = -1) {
	next(x, y);
	if (x == n) {
		best = max(best, cur);
		return;
	}
	bool good = true;
	rep(k, 0, 4) {
		int nx = x + dx4[k], ny = y + dy4[k];
		while (nx >= 0 && ny >= 0 && nx < n && ny < n && grid[nx][ny] != 'X') {
			if (grid[nx][ny] == 'R') {
				good = false;
				goto end;
			}
			nx += dx4[k];
			ny += dy4[k];
		}
	}
end:;
	if (good) {
		grid[x][y] = 'R';
		cur++;
		backtrack(x, y);
		grid[x][y] = '.';
		cur--;
	}
	backtrack(x, y);
}

int main() {
	while (cin >> n && n != 0) {
		grid.resize(n);
		read(grid);
		best = 0;
		backtrack();
		print("%d", best);
	}
}
