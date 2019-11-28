#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, m, s;
	forX() {
		cin >> m >> s;
		vvi grid = mi(s + 1, s + 1, inf);
		int ans = inf;
		vpii coins(m);
		irep(c, coins)
			cin >> c.first >> c.second;

		grid[0][0] = 0;
		drep(i, j, s + 1, s + 1) {
			if (grid[i][j] == inf)
				continue;
			irep(c, coins) {
				int x = i + c.first, y = j + c.second;
				if (x * x + y * y <= s * s) {
					grid[x][y] = min(grid[x][y], grid[i][j] + 1);
					if (x * x + y * y == s * s)
						ans = min(ans, grid[x][y]);
				}
			}
		}
		if (ans == inf)
			print("not possible");
		else
			print(ans);
	}
}
