#include <bits/stdc++.h>
#include "header.h"

map<char, pii> dxy = {
	{'N', {-1, 0}},
	{'E', {0, 1}},
	{'S', {1, 0}},
	{'W', {0, -1}},
};
int main() {
	int r, c, y;
	while (cin >> r >> c >> y && (r | c | y) != 0) {
		vs grid(r);
		read(grid);
		vvi steps = mi(r, c, inf);
		int x = 0, cur = 0;
		bool rep = false;
		y--;

		while (x >= 0 && x < r && y >= 0 && y < c) {
			if (steps[x][y] != inf) {
				print("%d step(s) before a loop of %d step(s)", steps[x][y], cur - steps[x][y]);
				rep = true;
				break;
			}

			steps[x][y] = cur;
			pii d = dxy[grid[x][y]];
			x += d.first;
			y += d.second;
			cur++;
		}

		if (!rep)
			print("%d step(s) to exit", cur);
	}
}
