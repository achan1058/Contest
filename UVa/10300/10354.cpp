#include <bits/stdc++.h>
#include "shortest_path.h"

int main() {
	int p, r, bh, of, yh, m, p1, p2, d;
	while (cin >> p >> r >> bh >> of >> yh >> m) {
		bh--;
		of--;
		yh--;
		m--;
		vvi graph = mi(p, p, inf);
		rep(i, 0, p)
			graph[i][i] = 0;
		rep(i, 0, r) {
			cin >> p1 >> p2 >> d;
			graph[p1 - 1][p2 - 1] = graph[p2 - 1][p1 - 1] = d;
		}

		vvi dist = floydWarshall(graph).x;
		vb bad(p);
		queue<int> q;
		q.push(bh);
		bad[bh] = true;
		while (!q.empty()) {
			int v = q.front();
			q.pop();

			rep(i, 0, p) {
				if (dist[v][of] == dist[v][i] + dist[i][of] && !bad[i]) {
					bad[i] = true;
					q.push(i);
				}
			}
		}

		vvi graph2 = mi(p, p, inf);
		rep(i, 0, p) {
			rep(j, 0, p) {
				if (!bad[i] && !bad[j])
					graph2[i][j] = graph[i][j];
			}
		}
		int ans = floydWarshall(graph2).x[yh][m];
		if (of == yh || of == m || bh == yh || bh == m || ans == inf)
			printf("MISSION IMPOSSIBLE.\n");
		else
			printf("%d\n", ans);
	}
}
