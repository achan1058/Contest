#include <bits/stdc++.h>
#include "header.h"

int main() {
	int r, c, n;
	while (cin >> r >> c >> n && (r | c | n) != 0) {
		vvb grid = mb(r, c, false);
		rep(i, 0, n) {
			int x1, x2, y1, y2;
			cin >> x1 >> y1 >> x2 >> y2;
			if (x1 > x2)
				swap(x1, x2);
			if (y1 > y2)
				swap(y1, y2);
			rep(i, x1 - 1, x2) {
				rep(j, y1 - 1, y2)
					grid[i][j] = true;
			}
		}

		int ans = 0;
		drep(i, j, r, c) {
			if (!grid[i][j])
				ans++;
		}

		if (ans == 0)
			print("There is no empty spots.");
		else if (ans == 1)
			print("There is one empty spot.");
		else
			print("There are %d empty spots.", ans);
	}
}
