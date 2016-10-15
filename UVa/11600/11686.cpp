#include <bits/stdc++.h>
#include "topo_sort.h"

int main() {
	int v, e, e1, e2;
	while (cin >> v >> e && (v | e) != 0) {
		vvi graph(v);
		rep(i, 0, e) {
			cin >> e1 >> e2;
			graph[e1 - 1].pb(e2 - 1);
		}
		vi result = topoSort(graph);
		if (result.empty())
			printf("IMPOSSIBLE\n");
		else {
			fori(v, result)
				printf("%d\n", v + 1);
		}
	}
}
