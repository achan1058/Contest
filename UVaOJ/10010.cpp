#include <bits/stdc++.h>
#include "header.h"

vs grid;
int r, c;
vi dx = { 1, 0, -1, -1, -1, 0, 1, 1 }, dy = { 1, 1, 1, 0, -1, -1, -1, 0 };
void find_word(const string& s) {
	rep(x, 0, r) {
		rep(y, 0, c) {
			rep(k, 0, 8) {
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
}

int main() {
	int N, w;
	string s;
	cin >> N;
	rep(X, 0, N) {
		printf("%s", X > 0 ? "\n" : "");
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
