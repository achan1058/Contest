#include <bits/stdc++.h>
#include "utils.h"
#include "header.h"

int main() {
	int r, c, ans = 0;
	cin >> r >> c;
	vs grid(r);
	read(grid);
	drep(x, y, r, c) {
		if (grid[x][y] != 'P')
			continue;
		rep(k, 0, 4) {
			int nx = x + dx4[k], ny = y + dy4[k];
			if (nx < 0 || nx >= r || ny < 0 || ny >= c || grid[nx][ny] != 'W')
				continue;
			ans++;
			grid[nx][ny] = ' ';
		}
	}
	print("%d", ans);
}
