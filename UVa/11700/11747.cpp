#include <bits/stdc++.h>
#include "spanning_tree.h"

int main() {
	int n, e, v1, v2, c;
	while (cin >> n >> e && (n | e) != 0) {
		set<long long> edges;
		vt<ll> graph(n);

		for (int i = 0; i < e; i++) {
			cin >> v1 >> v2 >> c;
			graph.pb({ v1, v2, c });
			edges.insert(c);
		}

		vt<ll> result = get<2>(kruskal(graph));
		for (int i = 0; i < sz(result); i++)
			edges.erase(get<2>(result[i]));
		if (edges.empty())
			printf("forest\n");
		else {
			bool first = true;
			for (long long e : edges) {
				printf("%s%lld", first ? "" : " ", e);
				first = false;
			}
			printf("\n");
		}
	}
}
