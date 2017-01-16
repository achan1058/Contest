#include <bits/stdc++.h>
#include "point.h"
#include "spanning_tree.h"

int main() {
	int n, e, v1, v2;
	forX() {
		cin >> n;
		vector<pti> points(n);
		vt<int> edges;
		rep(i, 0, n) {
			cin >> points[i];
			rep(j, 0, i)
				edges.pb({ i, j, points[i].dist2(points[j]) });
		}

		cin >> e;
		for (int i = 0; i < e; i++) {
			cin >> v1 >> v2;
			edges.pb({ v1 - 1, v2 - 1, 0 });
		}

		auto result = kruskal(edges, n);
		vt<int> tree = get<2>(result);
		printX("");
		if (get<0>(result) == 0)
			printf("No new highways need\n");
		irep(e, tree) {
			if (get<2>(e) > 0)
				printf("%d %d\n", get<0>(e) + 1, get<1>(e) + 1);
		}
	}
}
