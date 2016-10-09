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
			cin >> points[i];
			rep(j, 0, i)
				edges.push(i, j, points[i].dist2(points[j]));
		}

		cin >> e;
		for (int i = 0; i < e; i++) {
			cin >> v1 >> v2;
			edges.push(v1 - 1, v2 - 1, 0);
		}

		auto result = kruskal(edges);
		EdgeList<int> tree = get<2>(result);
		if (X > 0)
			printf("\n");
		if (get<0>(result) == 0)
			printf("No new highways need\n");
		for (int i = 0; i < tree.numE(); i++) {
			if (get<2>(tree[i]) > 0)
				printf("%d %d\n", get<0>(tree[i]) + 1, get<1>(tree[i]) + 1);
		}
	}
}
