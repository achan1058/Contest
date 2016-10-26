#include <bits/stdc++.h>
#include "graph_util.h"

int main() {
	int n, e, s, t;
	while (cin >> n && n != 0) {
		vvi graph(n);
		cin >> e;
		rep (i, 0, e) {
			cin >> s >> t;
			graph[s].pb(t);
			graph[t].pb(s);
		}
		printf("%sBICOLORABLE.\n", isBipartite(graph) ? "" : "NOT ");
	}
}
