#include <bits/stdc++.h>
#include "header.h"

int main() {
	vector<string> grid(5);
	string moves;
	whileX(getline(cin, grid[0]) && grid[0] != "Z") {
		int x, y;
		for (int i = 1; i < 5; i++)
			getline(cin, grid[i]);
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				if (grid[i][j] == ' ') {
					x = i;
					y = j;
				}
			}
		}

		bool good = true;
		while (true) {
			getline(cin, moves);
			for (char c : moves) {
				if (c == 'A' && x != 0) {
					swap(grid[x][y], grid[x - 1][y]);
					x--;
				} else if (c == 'B' && x != 4) {
					swap(grid[x][y], grid[x + 1][y]);
					x++;
				} else if (c == 'L' && y != 0) {
					swap(grid[x][y], grid[x][y - 1]);
					y--;
				} else if (c == 'R' && y != 4) {
					swap(grid[x][y], grid[x][y + 1]);
					y++;
				} else if (c == '0')
					goto end;
				else
					good = false;
			}
		}
	end:;

		printf("%sPuzzle #%d:\n", X > 1 ? "\n" : "", X);
		if (good) {
			for (int i = 0; i < 5; i++)
				printf("%c %c %c %c %c\n", grid[i][0], grid[i][1], grid[i][2], grid[i][3], grid[i][4]);
		} else
			printf("This puzzle has no final configuration.\n");
	}
}
