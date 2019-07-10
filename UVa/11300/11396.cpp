#include <bits/stdc++.h>
#include "components.h"
#include "header.h"

int main() {
	int n, v1, v2;
	while (cin >> n && n != 0) {
		vvi graph(n);
		while (cin >> v1 >> v2 && (v1 | v2) != 0) {
			graph[v1 - 1].pb(v2 - 1);
			graph[v2 - 1].pb(v1 - 1);
		}
		print(sz(bipartite(graph).second) == 0 ? "NO" : "YES");
	}
}
