#include <bits/stdc++.h>
#include "header.h"

vi dx = { 0, 1, 0, -1 };
vi dy = { 1, 0, -1, 0 };
vector<char> d = { 'N', 'E', 'S', 'W' };

int main() {
	int rows, cols, x, y, dir;
	char c;
	cin >> rows >> cols;
	vvb flagged = mb(rows + 1, cols + 1, false);

	while (cin >> x >> y >> c) {
		string s;
		cin >> s;
		bool lost = false;
		rep(i, 0, 4) {
			if (c == d[i])
				dir = i;
		}

		fori(in, s) {
			if (in == 'R') {
				dir = (dir + 1) % 4;
			} else if (in == 'L') {
				dir = (dir + 3) % 4;
			} else {
				if (x + dx[dir] < 0 || x + dx[dir] > rows || y + dy[dir] < 0 || y + dy[dir] > cols) {
					if (!flagged[x][y]) {
						flagged[x][y] = true;
						lost = true;
						break;
					}
				} else {
					x += dx[dir];
					y += dy[dir];
				}
			}
		}
		printf("%d %d %c%s\n", x, y, d[dir], lost ? " LOST" : "");
	}
}
