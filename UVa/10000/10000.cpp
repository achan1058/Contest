#include <bits/stdc++.h>
#include "topo_sort.h"

int main() {
	int n, s, X = 1, e1, e2;
	while (cin >> n >> s && n != 0) {
		AdjList<int> graph(n);
		while (cin >> e1 >> e2 && (e1 != 0 || e2 != 0))
			graph.push(e1 - 1, e2 - 1);
		pair<int, vi> result = longestDAG(graph, s - 1, -1);
		printf("Case %d: The longest path from %d has length %d, finishing at %d.\n\n", X, s, result.x, result.y.back() + 1);
		X++;
	}
}