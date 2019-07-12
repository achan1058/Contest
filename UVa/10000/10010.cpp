#include <bits/stdc++.h>
#include "utils.h"
#include "header.h"

int main() {
	forX() {
		int r, c, n;
		cin >> r >> c;
		vs grid = mc(r, c, ' ');
		drep(i, j, r, c) {
			cin >> grid[i][j];
			grid[i][j] = tolower(grid[i][j]);
		}

		cin >> n;
		printX();
		rep(t, 0, n) {
			string s;
			cin >> s;
			irep(v, s)
				v = tolower(v);
			drep(i, j, r, c) {
				rep(k, 0, 8) {
					int x = i, y = j;
					bool good = true;
					rep(l, 0, sz(s)) {
						if (x < 0 || x >= r || y < 0 || y >= c || grid[x][y] != s[l]) {
							good = false;
							break;
						}
						x += dx8[k];
						y += dy8[k];
					}
					if (good) {
						print(i + 1, j + 1);
						goto end;
					}
				}
			}
		end:;
		}
	}
}
