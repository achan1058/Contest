#include <bits/stdc++.h>
#include "util.h"
#include "graph_util.h"
#include "shortest_path.h"

int main() {
	int n, X = 1, v1, v2, q, d;
	while (cin >> n && n != 0) {
		Index<int> label_map;
		EdgeList<int> edges;
		rep(i, 0, n) {
			cin >> v1 >> v2;
			int t1 = label_map.getI(v1), t2 = label_map.getI(v2);
			edges.push(t1, t2, 1);
			edges.push(t2, t1, 1);
		}

		vvi dist = floydWarshall(edgeToMatrix(edges)).x;
		while (cin >> q >> d && (q | d) != 0) {
			int no_reach = 0, node = label_map.getI(q);
			rep(i, 0, sz(dist))
				if (i != node && dist[node][i] > d)
					no_reach++;

			printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n", X, no_reach, q, d);
			X++;
		}
	}
}
