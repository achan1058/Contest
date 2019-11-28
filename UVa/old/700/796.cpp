#include <bits/stdc++.h>
#include "components.h"

int main() {
	int n, v1, v2, e;
	char c;
	while (cin >> n) {
		vvi graph(n);
		for (int i = 0; i < n; i++) {
			cin >> v1 >> c >> e >> c;
			for (int j = 0; j < e; j++) {
				cin >> v2;
				graph[v1].pb(v2);
			}
		}

		vvi blocks = twoConnected(graph);
		vpii bridges;
		for (auto& b : blocks) {
			if (sz(b) == 2)
				bridges.pb({ min(b[0], b[1]), max(b[0], b[1]) });
		}
		sort(bridges.begin(), bridges.end());
		printf("%d critical links\n", bridges.size());
		for (int i = 0; i < bridges.size(); i++)
			printf("%d - %d\n", bridges[i].first, bridges[i].second);
		printf("\n");
	}
}
