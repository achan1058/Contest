#include <bits/stdc++.h>
#include "floodfill.h"
#include "header.h"

int main() {
	int r, c;
	whileX(cin >> r >> c && (r | c) != 0) {
		vs grid(r);
		read(grid);
		vector<pair<int, char>> ans;
		drep(i, j, r, c) {
			if (grid[i][j] != '.') {
				char g = grid[i][j];
				int t = floodfill(grid, i, j, '.');
				ans.pb({ -t, g });
			}
		}
		sort(all(ans));
		print("Problem %d:", X);
		irep(p, ans)
			print("%c %d", p.second, -p.first);
	}
}
