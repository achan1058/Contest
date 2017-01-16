#include <bits/stdc++.h>
#include "header.h"

vs grid;
int n, max_rook;
vi dx = { 1, 0, -1, 0 }, dy = { 0, 1, 0, -1 };
bool check(int x0, int y0) {
	rep(k, 0, sz(dx)) {
		int nx = x0, ny = y0;
		rep(i, 1, inf) {
			nx += dx[k];
			ny += dy[k];
			if (nx < 0 || nx >= n || ny < 0 || ny >= n || grid[nx][ny] == 'X')
				break;
			else if (grid[nx][ny] == 'R')
				return false;
		}
	}

	return true;
}

void search(int x0 = 0, int y0 = 0, int cur_rook = 0) {
	if (y0 >= n) {
		y0 = 0;
		x0++;
	}
	if (x0 >= n) {
		max_rook = max(cur_rook, max_rook);
		return;
	}
	if (grid[x0][y0] != 'X' && check(x0, y0)) {
		grid[x0][y0] = 'R';
		search(x0, y0 + 1, cur_rook + 1);
		grid[x0][y0] = '.';
	}

	search(x0, y0 + 1, cur_rook);
}

int main() {
	while (cin >> n && n != 0) {
		grid.resize(n);
		read(grid);
		max_rook = 0;
		search();
		printf("%d\n", max_rook);
	}
}
