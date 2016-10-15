#include <bits/stdc++.h>
#include "topo_sort.h"

int main() {
	int N, E;
	while (cin >> N >> E && (N | E) != 0) {
		int v1, v2;
		vvi graph(N);
		rep(i, 0, E) {
			cin >> v1 >> v2;
			graph[v1 - 1].pb(v2 - 1);
		}

		vi result = topoSort(graph);
		bool fs = true;
		fori(v, result) {
			printf("%s%d", fs ? "" : " ", v + 1);
			fs = false;
		}
		printf("\n");
	}
}
