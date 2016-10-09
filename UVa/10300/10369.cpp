#include <bits/stdc++.h>
#include "point.h"
#include "graph.h"
#include "union_find.h"

int kruskal(EdgeList<int>& edges, int min_comps) {
	UnionFind un(edges.numV());
	int num = edges.numV();
	edges.sortEdges();
	rep(i, 0, edges.numE()) {
		if (un.join(get<0>(edges[i]), get<1>(edges[i]))) {
			num--;
			if (num == min_comps)
				return get<2>(edges[i]);
		}
	}
	return 0;
}

int main() {
	int N, p, min_comps;
	cin >> N;

	rep(X, 0, N) {
		cin >> min_comps >> p;
		vector<pti> points(p);
		EdgeList<int> edges;
		rep(i, 0, p) {
			cin >> points[i];
			rep(j, 0, i)
				edges.push(i, j, points[i].dist2(points[j]));
		}
		printf("%.2lf\n", sqrt(kruskal(edges, min_comps)));
	}
}
