#include <bits/stdc++.h>
#include "header.h"

int main() {
	int r, c, q, x, y;
	forX() {
		cin >> r >> c >> q;
		vector<string> grid(r);
		read(grid);
		printf("%d %d %d\n", r, c, q);
		for (int i = 0; i < q; i++) {
			cin >> x >> y;
			int d = 1;
			while (true) {
				cerr << d << endl;
				if (x - d < 0 || x + d >= r || y - d < 0 || y + d >= c)
					goto end;
				for (int k = -d; k <= d; k++) {
					if (grid[x - d][y + k] != grid[x][y] || grid[x + d][y + k] != grid[x][y])
						goto end;
					if (grid[x + k][y - d] != grid[x][y] || grid[x + k][y + d] != grid[x][y])
						goto end;
				}
				d++;
			}
		end:;
			printf("%d\n", 2 * d - 1);
		}
	}
}
