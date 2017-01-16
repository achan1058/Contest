#include <bits/stdc++.h>
#include "header.h"

int r, c;
bool check(vs& grid, int x, int y, int dir) {
	int curx = x + dx[dir], cury = y + dy[dir];
	while (curx >= 0 && curx < r && cury >= 0 && cury < c) {
		if (grid[curx][cury] != '.')
			return true;
		curx += dx[dir];
		cury += dy[dir];
	}
	return false;
}

int main() {
	forX() {
		cin >> r >> c;
		vs grid = mc(r, c, '.');
		int change = 0;
		bool poss = true;

		drep(i, j, r, c)
			cin >> grid[i][j];
		drep(i, j, r, c) {
			if (grid[i][j] == '^' && !check(grid, i, j, 0)) {
				if (check(grid, i, j, 2) || check(grid, i, j, 1) || check(grid, i, j, 3))
					change++;
				else {
					poss = false;
					goto endloop;
				}
			} else if (grid[i][j] == 'v' && !check(grid, i, j, 2)) {
				if (check(grid, i, j, 1) || check(grid, i, j, 0) || check(grid, i, j, 3))
					change++;
				else {
					poss = false;
					goto endloop;
				}
			} else if (grid[i][j] == '>' && !check(grid, i, j, 1)) {
				if (check(grid, i, j, 0) || check(grid, i, j, 2) || check(grid, i, j, 3))
					change++;
				else {
					poss = false;
					goto endloop;
				}
			} else if (grid[i][j] == '<' && !check(grid, i, j, 3)) {
				if (check(grid, i, j, 0) || check(grid, i, j, 1) || check(grid, i, j, 2))
					change++;
				else {
					poss = false;
					goto endloop;
				}
			}
		}
	endloop:;

		if (!poss)
			printp("IMPOSSIBLE\n");
		else
			printp("%d\n", change);
	}
}
