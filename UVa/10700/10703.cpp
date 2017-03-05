#include <bits/stdc++.h>
#include "header.h"

int main() {
	int w, h, n;
	while (cin >> w >> h >> n && (w | h | n) != 0) {
		vvi grid = mi(w, h, 1);
		int x1, y1, x2, y2;
		rep(i, 0, n) {
			cin >> x1 >> y1 >> x2 >> y2;
			if (x2 < x1)
				swap(x1, x2);
			if (y2 < y1)
				swap(y1, y2);
			rep(x, x1 - 1, x2) {
				rep(y, y1 - 1, y2)
					grid[x][y] = 0;
			}
		}

		int ans = 0;
		drep(i, j, w, h)
			ans += grid[i][j];
		if (ans == 0)
			printf("There is no empty spots.\n");
		else if (ans == 1)
			printf("There is one empty spot.\n");
		else
			printf("There are %d empty spots.\n", ans);
	}
}
