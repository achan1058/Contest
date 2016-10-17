#include <bits/stdc++.h>
#include "header.h"

vector<int> dx = { 1, 1, 1, 0, -1, -1, -1,0 }, dy = { 1, 0, -1, -1, -1, 0, 1, 1 };

int main() {
	int n;
	cin >> n;
	vector<string> grid(n);
	string s;

	for (auto& g : grid)
		cin >> g;
	while (cin >> s && s != "0") {
		bool found = false;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				for (int k = 0; k < 8; k++) {
					bool good = true;
					for (int l = 0; l < sz(s); l++) {
						int di = i + l * dx[k], dj = j + l * dy[k];
						if (di < 0 || di >= n || dj < 0 || dj >= n || grid[di][dj] != s[l]) {
							good = false;
							break;
						}
					}
					if (good) {
						printf("%d,%d %d,%d\n", i + 1, j + 1, i + (sz(s) - 1) * dx[k] + 1, j + (sz(s) - 1) * dy[k] + 1);
						found = true;
						goto end;
					}
				}
			}
		}
	end:;
		if (!found)
			printf("Not found\n");
	}
}
