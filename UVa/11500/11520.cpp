#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	forX() {
		cin >> n;
		vs grid(n);
		read(grid);
		drep(i, j, n, n) {
			if (grid[i][j] == '.') {
				grid[i][j] = 'A';
				while ((i > 0 && grid[i][j] == grid[i - 1][j]) ||
					(j > 0 && grid[i][j] == grid[i][j - 1]) ||
					(i < n - 1 && grid[i][j] == grid[i + 1][j]) ||
					(j < n - 1 && grid[i][j] == grid[i][j + 1]))
					grid[i][j]++;
			}
		}
		printcn();
		for (int i = 0; i < n; i++)
			printf("%s\n", grid[i].c_str());
	}
}
