#include <bits/stdc++.h>
#include "util.h"
#include "graph_util.h"
#include "shortest_path.h"

int main() {
	int v1, v2;
	whileX(cin >> v1 >> v2 && (v1 | v2) != 0) {
		Index<int> label_map;
		vt<int> edges;

		do {
			int t1 = label_map.getI(v1), t2 = label_map.getI(v2);
			edges.pb({ t1, t2, 1 });
		} while (cin >> v1 >> v2 && (v1 | v2) != 0);

		vvi dist = floydWarshall(edgeToMatrix(edges)).x;
		int total_cost = 0, n = sz(dist);
		drep(i, j, n, n) {
			if (i != j)
				total_cost += dist[i][j];
		}

		printc("average length between pages = %.3f clicks\n", double(total_cost) / n / (n - 1));
	}
}
