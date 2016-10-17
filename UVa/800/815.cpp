#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, m, X = 1;
	double vol;
	while (cin >> n >> m && (n | m) != 0) {
		vi grid(n * m);
		irep(v, grid)
			cin >> v;
		sort(all(grid));
		grid.push_back(inf);
		cin >> vol;

		for (int i = 1; i <= n * m; i++) {
			double d = grid[i] - grid[i - 1];
			if (vol / i / 100 <= d + eps) {
				printf("Region %d\n", X);
				printf("Water level is %.2lf meters.\n", grid[i - 1] + vol / i / 100);
				printf("%.2lf percent of the region is under water.\n\n", double(i) / m / n * 100);
				break;
			} else {
				vol -= i * d * 100;
			}
		}
		X++;
	}
}
