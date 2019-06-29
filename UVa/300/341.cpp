#include <bits/stdc++.h>
#include "shortest_path.h"
#include "header.h"

int main() {
	int n, v, t, k;
	whileX(cin >> n && n != 0) {
		adj_list<int> graph(n);
		rep(i, 0, n) {
			cin >> k;
			rep(j, 0, k) {
				cin >> v >> t;
				graph[i].pb({ v - 1, t });
			}
		}
		cin >> v >> t;
		auto ans = dijkstra(graph, v - 1);
		vi path = getPath(ans.second, v - 1, t - 1);
		printf("Case %d: Path =", X);
		irep(p, path)
			printf(" %d", p + 1);
		print("; %d second delay", ans.first[t - 1]);
	}
}
