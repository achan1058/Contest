#include <bits/stdc++.h>
#include "utils.h"
#include "header.h"

int main() {
	forX() {
		string name;
		int r, c;
		cin >> name >> r >> c;
		vvi grid = mi(r, c, 0), longest = mi(r, c, 1);
		read(grid);
		vector<pair<int, pii>> heights;
		drep(i, j, r, c)
			heights.pb({ grid[i][j], {i, j} });

		int ans = 1;
		sort(all(heights));
		irep(h, heights) {
			int v = h.f, x = h.s.f, y = h.s.s;

			rep(k, 0, 4) {
				int nx = x + dx4[k], ny = y + dy4[k];
				if (nx < 0 || nx >= r || ny < 0 || ny >= c || grid[x][y] >= grid[nx][ny])
					continue;

				longest[nx][ny] = max(longest[nx][ny], longest[x][y] + 1);
				ans = max(ans, longest[nx][ny]);
			}
		}
		print("%s: %d", name.c_str(), ans);
	}
}
