#include <bits/stdc++.h>
#include "components.h"

int main() {
	int n, v1, v2, m, N;
	cin >> N;
	for (int X = 0; X < N; X++) {
		cin >> n >> m;
		vvi graph(n);
		for (int i = 0; i < m; i++) {
			cin >> v1 >> v2;
			graph[v1 - 1].pb(v2 - 1);
		}

		pair<int, vector<int>> compid = stronglyConnected(graph);
		vector<bool> root(compid.first, true);
		int ans = 0;
		for (int i = 0; i < n; i++) {
			for (auto& e : graph[i]) {
				if (compid.second[i] != compid.second[e])
					root[compid.second[e]] = false;
			}
		}
		for (int i = 0; i < compid.first; i++)
			ans += (root[i] ? 1 : 0);
		printf("%d\n", ans);
	}
}
