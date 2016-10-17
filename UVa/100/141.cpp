#include <bits/stdc++.h>
#include "header.h"

vvb rotateRight(const vvb& grid) {
	int n = sz(grid);
	vvb ans = mb(n, n, false);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			ans[i][j] = grid[j][n - i - 1];
	}
	return ans;
}
vvb reflect(const vvb& grid) {
	int n = sz(grid);
	vvb ans = mb(n, n, false);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			ans[i][j] = grid[i][n - j - 1];
	}
	return ans;
}

int main() {
	int n, x, y;
	char c;
	while (cin >> n && n != 0) {
		vvb grid = mb(n, n, false);
		vector<vvb> old;
		old.push_back(grid);
		for (int i = 0; i < 2 * n; i++) {
			cin >> x >> y >> c;
			grid[x - 1][y - 1] = (c == '+');

			for (auto& g : old) {
				if (grid == g) {
					printf("Player %d wins on move %d\n", 2 - i % 2, i + 1);
					i++;
					while (i < 2 * n) {
						cin >> x >> y >> c;
						i++;
					}
					goto end;
				}
			}

			vvb r1 = rotateRight(grid);
			vvb r2 = rotateRight(r1);
			vvb r3 = rotateRight(r2);
			vvb f1 = reflect(r1);
			vvb f2 = reflect(r2);
			vvb f3 = reflect(r3);
			vvb f4 = reflect(grid);
			old.push_back(grid);
			old.push_back(r1);
			old.push_back(r2);
			old.push_back(r3);
			old.push_back(f1);
			old.push_back(f2);
			old.push_back(f3);
			old.push_back(f4);
		}
		printf("Draw\n");
	end:;
	}
}
