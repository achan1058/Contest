#include <bits/stdc++.h>
#include "components.h"
#include "header.h"

int main() {
	forX() {
		int n, e, v1, v2;
		cin >> n >> e;
		vvi graph(n);
		rep(i, 0, e) {
			cin >> v1 >> v2;
			graph[v1].pb(v2);
			graph[v2].pb(v1);
		}
		auto p = bipartite(graph);
		int is = 0;
		rep(i, 0, n)
			is += sz(graph[i]) == 0 ? 1 : 0;
		print(sz(p.second) == 0 ? -1 : sz(p.first) + is);
	}
}
