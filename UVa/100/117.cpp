#include <bits/stdc++.h>
#include "shortest_path.h"

int main() {
	AdjList<int> graph(26);
	int total = 0;
	string s;

	while (cin >> s) {
		if (s == "deadend") {
			vi odd;
			rep(i, 0, 26) {
				if (sz(graph[i]) % 2 == 1)
					odd.pb(i);
			}

			if (sz(odd) > 0) {
				vi dist = dijkstra(graph, odd[0]).x;
				total += dist[odd[1]];
			}

			printf("%d\n", total);
			graph = AdjList<int>(26);
			total = 0;
		} else {
			int v1 = s[0] - 'a', v2 = s.back() - 'a';
			graph.push(v1, v2, sz(s));
			graph.push(v2, v1, sz(s));
			total += sz(s);
		}
	}
}
