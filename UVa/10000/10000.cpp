#include <bits/stdc++.h>
#include "topo_sort.h"
#include "header.h"

int main() {
	int n, s, v1, v2;
	whileX(cin >> n && n != 0) {
		adj_list<int> graph(n);
		cin >> s;
		while (cin >> v1 >> v2 && (v1 | v2) != 0)
			graph[v1 - 1].pb({ v2 - 1, 1 });

		auto result = longestDAG(graph, s - 1);
		printc("The longest path from %d has length %d, finishing at %d.\n", s, result.first, result.second.back() + 1);
	}
}
