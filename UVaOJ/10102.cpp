#include <bits/stdc++.h>
#include "header.h"

vi dx = { 1, 0, -1, 0 }, dy = { 0, -1, 0, 1 };
int main() {
	int n;
	while (cin >> n) {
		vs field(n);
		vvi dist = mi(n, n, inf);
		queue<pii> q;
		irep(s, field)
			cin >> s;
		rep(i, 0, n) {
			rep(j, 0, n) {
				if (field[i][j] == '3') {
					dist[i][j] = 0;
					q.push({ i, j });
				}
			}
		}

		int best = 0;
		while (!q.empty()) {
			int x = q.front().x, y = q.front().y;
			q.pop();

			if (field[x][y] == '1')
				best = max(best, dist[x][y]);
			rep(i, 0, 4) {
				int nx = x + dx[i], ny = y + dy[i];
				if (nx < 0 || nx >= n || ny < 0 || ny >= n || dist[nx][ny] <= dist[x][y] + 1)
					continue;

				dist[nx][ny] = dist[x][y] + 1;
				q.push({ nx, ny });
			}
		}
		printf("%d\n", best);
	}
}
