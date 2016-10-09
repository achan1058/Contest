#include <bits/stdc++.h>
#include "spanning_tree.h"

int main() {
	int N, n, e, e1, e2, v;
	cin >> N;
	rep(X, 0, N) {
		cin >> n >> e;

		EdgeList<int> edges(n);
		rep(i, 0, e) {
			cin >> e1 >> e2 >> v;
			edges.push(e1, e2, v);
		}
		tuple<int, int, EdgeList<int>> result = kruskal(edges);
		int best = inf;
		rep(i, 0, get<2>(result).numE()) {
			rep(j, 0, edges.numE()) {
				if (get<2>(result)[i] == edges[j]) {
					get<2>(edges[j]) = inf;
					best = min(best, get<0>(kruskal(edges)));
					edges[edges.numE() - 1] = get<2>(result)[i];
					break;
				}
			}
		}
		printf("%d %d\n", get<0>(result), best);
	}
}
