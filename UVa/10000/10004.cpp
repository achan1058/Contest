#include <bits/stdc++.h>
#include "components.h"
#include "header.h"

int main() {
	int n, e, v1, v2;
	while (cin >> n >> e && n != 0) {
		vvi graph(n);
		rep(i, 0, e) {
			cin >> v1 >> v2;
			graph[v1].pb(v2);
			graph[v2].pb(v1);
		}
		auto p = bipartite(graph);
		print(sz(p.second) > 0 ? "BICOLORABLE." : "NOT BICOLORABLE.");
	}
}
