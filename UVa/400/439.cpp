#include <bits/stdc++.h>
#include "shortest_path.h"
#include "header.h"

vector<int> dx = { -1, -2, -2, -1, 1, 2, 2, 1 }, dy = { 2, 1, -1, -2, -2, -1, 1, 2 };

int toNum(string s) {
	return 8 * (s[0] - 'a') + s[1] - '1';
}

int main() {
	vvi grid = mi(64, 64, inf);
	drep(i, j, 8, 8) {
		grid[8 * i + j][8 * i + j] = 0;
		rep(k, 0, 8) {
			int nx = i + dx[k], ny = j + dy[k];
			if (nx < 0 || nx >= 8 || ny < 0 || ny >= 8)
				continue;
			grid[8 * i + j][8 * nx + ny] = 1;
		}
	}
	vvi dist = floyd(grid).first;
	string s1, s2;
	while (cin >> s1 >> s2)
		print("To get from %s to %s takes %d knight moves.", s1.c_str(), s2.c_str(), dist[toNum(s1)][toNum(s2)]);
}
