#include <bits/stdc++.h>
#include "header.h"

int main() {
	int T, n;
	cin >> T;
	for (int X = 1; X <= T; X++) {
		cin >> n;
		vs grid(n);
		for (int i = 0; i < n; i++)
			cin >> grid[i];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (grid[i][j] == '.') {
					grid[i][j] = 'A';
					while ((i > 0 && grid[i][j] == grid[i - 1][j]) ||
						(j > 0 && grid[i][j] == grid[i][j - 1]) ||
						(i < n - 1 && grid[i][j] == grid[i + 1][j]) ||
						(j < n - 1 && grid[i][j] == grid[i][j + 1]))
						grid[i][j]++;
				}
			}
		}
		printf("Case %d:\n", X);
		for (int i = 0; i < n; i++)
			printf("%s\n", grid[i].c_str());
	}
}
