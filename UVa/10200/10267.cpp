#include <bits/stdc++.h>
#include "floodfill.h"
#include "header.h"

int main() {
	int r, c, x1, x2, y1, y2;
	vs grid;
	string s;
	char cmd, clr;
	while (getline(cin, s)) {
		stringstream ss(s);
		ss >> cmd;
		if (cmd == 'X') {
			break;
		} else if (cmd == 'I') {
			ss >> r >> c;
			grid = mc(c, r, 'O');
		} else if (cmd == 'C') {
			grid = mc(c, r, 'O');
		} else if (cmd == 'L') {
			ss >> x1 >> y1 >> clr;
			grid[y1 - 1][x1 - 1] = clr;
		} else if (cmd == 'V') {
			ss >> x1 >> y1 >> y2 >> clr;
			rep(i, min(y1, y2) - 1, max(y1, y2))
				grid[i][x1 - 1] = clr;
		} else if (cmd == 'H') {
			ss >> x1 >> x2 >> y1 >> clr;
			rep(j, min(x1, x2) - 1, max(x1, x2))
				grid[y1 - 1][j] = clr;
		} else if (cmd == 'K') {
			ss >> x1 >> y1 >> x2 >> y2 >> clr;
			rep(i, min(y1, y2) - 1, max(y1, y2)) {
				rep(j, min(x1, x2) - 1, max(x1, x2))
					grid[i][j] = clr;
			}
		} else if (cmd == 'F') {
			ss >> x1 >> y1 >> clr;
			floodfill(grid, y1 - 1, x1 - 1, clr);
		} else if (cmd == 'S') {
			ss >> s;
			print(s);
			print(grid, true);
		}
	}
}
