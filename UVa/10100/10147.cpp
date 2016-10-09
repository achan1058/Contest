#include <bits/stdc++.h>
#include "point.h"
#include "spanning_tree.h"

int main() {
	int N, n, e, v1, v2;
	cin >> N;

	rep(X, 0, N) {
		cin >> n;
		vector<pti> points(n);
		EdgeList<int> edges;
		rep(i, 0, n) {
			cin >> points[i].x >> points[i].y;
			rep(j, 0, i)
				edges.push(i, j, points[i].dist2(points[j]));
		}

		cin >> e;
		for (int i = 0; i < e; i++) {
			cin >> v1 >> v2;
			edges.push(v1 - 1, v2 - 1, 0);
		}
		EdgeList<int> tree = get<2>(kruskal(edges));
		if (X > 0)
			printf("\n");

		bool newEdges = false;
		for (int i = 0; i < tree.numE(); i++) {
			if (get<2>(tree[i]) > 0) {
				printf("%d %d\n", get<0>(tree[i]) + 1, get<1>(tree[i]) + 1);
				newEdges = true;
			}
		}
		if (!newEdges)
			printf("No new highways need\n");
	}
}
