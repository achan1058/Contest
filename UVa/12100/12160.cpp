#include <bits/stdc++.h>
#include "header.h"

int flooddist(const vi& moves, int x0, int x1) {
	vi grid(10000, inf);
	queue<int> q;
	grid[x0] = 0;
	q.push(x0);

	while (!q.empty()) {
		int x = q.front();
		q.pop();
		irep(m, moves) {
			int nx = (x + m) % 10000;
			if (grid[x] + 1 >= grid[nx])
				continue;
			if (nx == x1)
				return grid[x] + 1;

			grid[nx] = grid[x] + 1;
			q.push(nx);
		}
	}
	return inf;
}

int main() {
	int s, e, n;
	whileX(cin >> s >> e >> n && (s | e | n) != 0) {
		vi moves(n);
		read(moves);
		int m = flooddist(moves, s, e);
		if (m == inf)
			printf("Case %d: Permanently Locked\n", X);
		else
			printf("Case %d: %d\n", X, m);
	}
}
