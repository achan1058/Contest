#include <bits/stdc++.h>
#include "header.h"

int m, n;
vs grid;
vi dx = { 1, 0, -1, 0 }, dy = { 0, 1, 0, -1 };
void flood(int xx, int yy, char c) {
	if (grid[xx][yy] == c)
		return;

	char ori_color = grid[xx][yy];
	queue<pair<int, int> > q;
	q.push({ xx, yy });
	grid[xx][yy] = c;
	while (!q.empty()) {
		int x1 = q.front().x, y1 = q.front().y;
		q.pop();
		rep(k, 0, 4) {
			int nx = x1 + dx[k], ny = y1 + dy[k];
			if (nx >= 0 && nx < m && ny >= 0 && ny < n && grid[nx][ny] == ori_color) {
				grid[nx][ny] = c;
				q.push(make_pair(nx, ny));
			}
		}
	}
}

int main() {
	char cmd, c;
	while (cin >> cmd && cmd != 'X') {
		if (cmd == 'I') {
			cin >> n >> m;
			grid = mc(m, n, 'O');
		} else if (cmd == 'C') {
			rep(i, 0, m) {
				rep(j, 0, n)
					grid[i][j] = 'O';
			}
		} else if (cmd == 'L') {
			int x, y;
			cin >> y >> x >> c;
			grid[x - 1][y - 1] = c;
		} else if (cmd == 'V') {
			int x, y1, y2;
			cin >> x >> y1 >> y2 >> c;
			if (y1 > y2)
				swap(y1, y2);
			rep(y, y1 - 1, y2)
				grid[y][x - 1] = c;
		} else if (cmd == 'H') {
			int x1, x2, y;
			cin >> x1 >> x2 >> y >> c;
			if (x1 > x2)
				swap(x1, x2);
			rep(x, x1 - 1, x2)
				grid[y - 1][x] = c;
		} else if (cmd == 'K') {
			int x1, x2, y1, y2;
			cin >> x1 >> y1 >> x2 >> y2 >> c;
			if (y1 > y2)
				swap(y1, y2);
			if (x1 > x2)
				swap(x1, x2);
			rep(x, x1 - 1, x2) {
				rep(y, y1 - 1, y2)
					grid[y][x] = c;
			}
		} else if (cmd == 'F') {
			int x, y;
			cin >> y >> x >> c;
			flood(x - 1, y - 1, c);
		} else if (cmd == 'S') {
			string name;
			cin >> name;
			printf("%s\n", name.c_str());
			rep(i, 0, m)
				printf("%s\n", grid[i].c_str());
		}
		string s;
		getline(cin, s);
	}
}
