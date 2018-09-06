#include <bits/stdc++.h>
#include "floodfill.h"
#include "header.h"

int main() {
	forX() {
		int r, c;
		cin >> r >> c;
		vs grid(r);
		map<char, int> count;
		read(grid);
		drep(i, j, r, c) {
			if (grid[i][j] != ' ') {
				count[grid[i][j]]++;
				floodfill(grid, i, j, ' ');
			}
		}

		vector<pair<int, char>> ans;
		irep(c, count)
			ans.pb({ -c.y, c.x });
		sort(all(ans));
		print("World #%d", X);
		irep(a, ans)
			print("%c: %d", a.y, -a.x);
	}
}
