#include <bits/stdc++.h>
#include "header.h"

void decompose(vs& grid, int r1, int c1, int r2, int c2) {
	int x = -1, y = -1;
	rep(i, r1, r2) {
		rep(j, c1, c2) {
			if (grid[i][j] != '?') {
				if (x == -1) {
					x = i;
					y = j;
					continue;
				} else if (x == i) {
					decompose(grid, r1, c1, r2, y + 1);
					decompose(grid, r1, y + 1, r2, c2);
					return;
				} else {
					decompose(grid, r1, c1, x + 1, c2);
					decompose(grid, x + 1, c1, r2, c2);
					return;
				}
			}
		}
	}
	rep(i, r1, r2) {
		rep(j, c1, c2)
			grid[i][j] = grid[x][y];
	}
}

int main() {
	forX() {
		int r, c;
		cin >> r >> c;
		vs s(r);
		read(s);
		decompose(s, 0, 0, r, c);
		printp("\n");
		irep(v, s)
			printf("%s\n", v.c_str());
	}
}