#include <bits/stdc++.h>
#include "header.h"

int main() {
	int start, end, n;
	whileX(cin >> start >> end >> n && (start | end | n) != 0) {
		vi dist(10000, inf), moves(n);
		read(moves);
		dist[start] = 0;
		queue<int> q;
		q.push(start);

		while (!q.empty()) {
			int x = q.front();
			q.pop();
			if (x == end) {
				printc("%d\n", dist[x]);
				break;
			}

			irep(v, moves) {
				int nx = (x + v) % 10000;
				if (dist[nx] == inf) {
					dist[nx] = dist[x] + 1;
					q.push(nx);
				}
			}
		}

		if (dist[end] == inf)
			printc("Permanently Locked\n");
	}
}
