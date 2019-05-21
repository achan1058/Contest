#include <bits/stdc++.h>
#include "utils.h"
#include "shortest_path.h"
#include "header.h"

int main() {
	int e, X = 0;
	while (cin >> e && e != 0) {
		int v1, v2;
		edge_list<int> edges;
		mapper<int> m;
		rep(i, 0, e) {
			cin >> v1 >> v2;
			v1 = m.map(v1);
			v2 = m.map(v2);
			edges.pb({ v1, v2, 1 });
			edges.pb({ v2, v1, 1 });
		}
		vvi mat = toMatrix(edges);
		vvi dist = floyd(mat).f;
		while (cin >> v1 >> v2 && (v1 | v2) != 0) {
			X++;
			int reach = 0, m1 = m.map(v1);
			rep(i, 0, sz(m)) {
				if (m1 != i && dist[m1][i] > v2)
					reach++;
			}
			printc("%d nodes not reachable from node %d with TTL = %d.", reach, v1, v2);
		}
	}
}
