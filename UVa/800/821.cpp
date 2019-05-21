#include <bits/stdc++.h>
#include "utils.h"
#include "shortest_path.h"
#include "header.h"

int main() {
	int v1, v2;
	whileX(cin >> v1 >> v2 && (v1 | v2) != 0) {
		edge_list<int> edges;
		mapper<int> m;
		do {
			edges.pb({ m.map(v1), m.map(v2), 1 });
		} while (cin >> v1 >> v2 && (v1 | v2) != 0);

		vvi graph = toMatrix(edges);
		vvi dist = floyd(graph).f;
		int n = sz(m);
		double total = 0;
		drep(i, j, n, n) {
			if (i != j)
				total += dist[i][j];
		}
		printc("average length between pages = %.3f clicks", total / n / (n - 1));
	}
}
