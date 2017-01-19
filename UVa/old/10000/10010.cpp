#include <bits/stdc++.h>
#include "header.h"

vs grid;
int r, c;
vi dx = { 1, 0, -1, -1, -1, 0, 1, 1 }, dy = { 1, 1, 1, 0, -1, -1, -1, 0 };
void find_word(const string& s) {
	drep(x, y, r, c) {
		rep(k, 0, sz(dx)) {
			int nx = x, ny = y;
			bool found = true;
			irep(c, s) {
				if (nx < 0 || nx >= r || ny < 0 || ny >= c || c != grid[nx][ny]) {
					found = false;
					break;
				}
				nx += dx[k];
				ny += dy[k];
			}
			if (found) {
				printf("%d %d\n", x + 1, y + 1);
				return;
			}
		}
	}
}

int main() {
	int w;
	string s;
	forX() {
		printX("");
		cin >> r >> c;
		grid.resize(r);
		rep(i, 0, r) {
			cin >> grid[i];
			rep(j, 0, c)
				grid[i][j] = tolower(grid[i][j]);
		}
		cin >> w;
		rep(i, 0, w) {
			cin >> s;
			irep(c, s)
				c = tolower(c);
			find_word(s);
		}
	}
}