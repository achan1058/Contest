#include <bits/stdc++.h>
#include "header.h"

int x, y, z;
vector<vvi> board;
vi dx = { 1, -1, 0, 0, 0, 0 }, dy = { 0, 0, 1, -1, 0, 0 }, dz = { 0, 0, 0, 0, 1, -1 };
int floodfill(int x0, int y0, int z0) {
	queue<tuple<int, int, int>> q;
	q.push(make_tuple(x0, y0, z0));
	board[x0][y0][z0] = 0;

	while (!q.empty()) {
		int x1 = get<0>(q.front()), y1 = get<1>(q.front()), z1 = get<2>(q.front());
		q.pop();
		rep(i, 0, sz(dx)) {
			int nx = x1 + dx[i], ny = y1 + dy[i], nz = z1 + dz[i];
			if (nx < 0 || nx >= x || ny < 0 || ny >= y || nz < 0 || nz >= z)
				continue;
			if (board[nx][ny][nz] == -1)
				return board[x1][y1][z1] + 1;
			else if (board[nx][ny][nz] > board[x1][y1][z1] + 1) {
				board[nx][ny][nz] = board[x1][y1][z1] + 1;
				q.push(make_tuple(nx, ny, nz));
			}
		}
	}
	return inf;
}

int main() {
	int x0, y0, z0;
	char c;
	while (cin >> x >> y >> z && (x != 0 || y != 0 || z != 0)) {
		board = vector<vvi>(x, mi(y, z, 0));
		rep(i, 0, x) {
			rep(j, 0, y) {
				rep(k, 0, z) {
					cin >> c;
					if (c == 'S') {
						board[i][j][k] = 1;
						x0 = i;
						y0 = j;
						z0 = k;
					} else if (c == 'E') {
						board[i][j][k] = -1;
					} else if (c == '.') {
						board[i][j][k] = inf;
					}
				}
			}
		}

		int ans = floodfill(x0, y0, z0);
		if (ans == inf)
			printf("Trapped!\n");
		else
			printf("Escaped in %d minute(s).\n", ans);
	}
}
