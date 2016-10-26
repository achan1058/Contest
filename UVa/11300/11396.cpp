#include <bits/stdc++.h>
#include "graph_util.h"

int main() {
	int n, u, v;
	while (cin >> n && n != 0) {
		vvi graph(n);
		while(cin >> u >> v && (u | v) != 0) {
			graph[u - 1].pb(v - 1);
			graph[v - 1].pb(u - 1);
		}
		printf("%s\n", isBipartite(graph) ? "YES" : "NO");
	}
}
