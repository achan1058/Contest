#include <bits/stdc++.h>
#include "utils.h"
#include "shortest_path.h"
#include "header.h"

int main() {
	int v1, v2;
	whileX(cin >> v1 >> v2 && v1 >= 0 && v2 >= 0) {
		int zero = -1, two = 0;
		vi indeg;
		adj_list<int> graph;
		mapper<int> mp;
		while ((v1 | v2) != 0) {
			if (v1 == v2)
				two++;

			int t1 = mp.map(v1);
			int t2 = mp.map(v2);
			indeg.resize(sz(mp));
			graph.resize(sz(mp));
			indeg[t2]++;
			graph[t1].pb({ t2, 1 });
			cin >> v1 >> v2;
		}
		rep(i, 0, sz(indeg)) {
			two += indeg[i] > 1 ? 1 : 0;
			if (indeg[i] == 0)
				zero = zero == -1 ? i : -2;
		}
		if (zero >= 0) {
			vi dist = dijkstra(graph, zero).first;
			rep(i, 0, sz(dist)){
				if (i != zero && dist[i] == inf)
					two++;
			}
		}
		print("Case %d is %sa tree.", X, sz(indeg) == 0 || (two == 0 && zero >= 0) ? "" : "not ");
	}
}
