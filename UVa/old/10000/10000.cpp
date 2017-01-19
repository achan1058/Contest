#include <bits/stdc++.h>
#include "topo_sort.h"

int main() {
	int n, s, e1, e2;
	whileX(cin >> n >> s && n != 0) {
		vvi graph(n);
		while (cin >> e1 >> e2 && (e1 | e2) != 0)
			graph[e1 - 1].pb(e2 - 1);
		vi result = longestDAG(graph, s - 1, -1);
		printc("The longest path from %d has length %d, finishing at %d.\n\n", s, sz(result) - 1, result.back() + 1);
	}
}