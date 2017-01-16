#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		vs grid = mc(32, 32, '.');
		int x, y;
		char c;
		cin >> y >> x;
		x = 32 - x;

		while (cin >> c && c != '.') {
			if (c == 'N') {
				grid[x - 1][y] = 'X';
				x--;
			} else if (c == 'E') {
				grid[x][y] = 'X';
				y++;
			} else if (c == 'S') {
				grid[x][y - 1] = 'X';
				x++;
			} else {
				grid[x - 1][y - 1] = 'X';
				y--;
			}
		}

		printf("Bitmap #%d\n", X);
		irep(s, grid)
			printf("%s\n", s.c_str());
		printf("\n");
	}
}
