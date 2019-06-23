#include <bits/stdc++.h>
#include "topo_sort.h"
#include "header.h"

int main() {
	int v, e, v1, v2;
	while (cin >> v >> e && (v | e) != 0) {
		vvi graph(v);
		rep(i, 0, e) {
			cin >> v1 >> v2;
			graph[v1 - 1].pb(v2 - 1);
		}
		vi ans = topoSort(graph);
		rep(i, 0, v)
			printf("%d%c", ans[i] + 1, i == v - 1 ? '\n' : ' ');
	}
}
