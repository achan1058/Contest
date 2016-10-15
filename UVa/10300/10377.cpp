#include <bits/stdc++.h>
#include "header.h"

int main() {
	int r, c, x, y, dir;
	char ch;
	forX() {
		cin >> r >> c;
		vs grid(r);
		getline(cin, XS);
		irep(s, grid)
			getline(cin, s);

		cin >> x >> y;
		dir = 0;
		x--;
		y--;

		while (cin >> ch && ch != 'Q') {
			if (ch == 'R')
				dir = (dir + 1) % 4;
			else if (ch == 'L')
				dir = (dir + 3) % 4;
			else {
				int nx = x + dx[dir], ny = y + dy[dir];
				if (grid[nx][ny] != '*') {
					x = nx;
					y = ny;
				}
			}
		}

		printX("%d %d %c\n", x + 1, y + 1, "NESW"[dir]);
	}
}
