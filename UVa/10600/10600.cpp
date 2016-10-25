#include <bits/stdc++.h>
#include "spanning_tree.h"

int main() {
	int n, e, e1, e2, v;
	forX() {
		cin >> n >> e;

		vt<int> edges;
		rep(i, 0, e) {
			cin >> e1 >> e2 >> v;
			edges.pb({ e1, e2, v });
		}
		tuple<int, int, vt<int>> result = kruskal(edges);
		int best = inf;
		rep(i, 0, sz(get<2>(result))) {
			rep(j, 0, sz(edges)) {
				if (get<2>(result)[i] == edges[j]) {
					get<2>(edges[j]) = inf;
					best = min(best, get<0>(kruskal(edges)));
					edges[sz(edges) - 1] = get<2>(result)[i];
					break;
				}
			}
		}
		printf("%d %d\n", get<0>(result), best);
	}
}
