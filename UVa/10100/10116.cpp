#include <bits/stdc++.h>
#include "header.h"

int main() {
	int r, c, n;
	while (cin >> r >> c >> n && r > 0) {
		vs grid(r);
		read(grid);
		vvi arr = mi(r, c, 0);

		int curv = 1, curx = n - 1, cury = 0;
		bool exit = false;
		while (arr[cury][curx] == 0) {
			arr[cury][curx] = curv;
			if (grid[cury][curx] == 'N')
				cury--;
			else if (grid[cury][curx] == 'S')
				cury++;
			else if (grid[cury][curx] == 'W')
				curx--;
			else if (grid[cury][curx] == 'E')
				curx++;
			if (curx < 0 || curx >= c || cury < 0 || cury >= r) {
				exit = true;
				break;
			}

			curv++;
		}

		if (exit)
			printf("%d step(s) to exit\n", curv);
		else
			printf("%d step(s) before a loop of %d step(s)\n", arr[cury][curx] - 1, curv - arr[cury][curx]);
	}
}
