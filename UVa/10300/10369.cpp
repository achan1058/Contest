#include <bits/stdc++.h>
#include "point.h"
#include "union_find.h"

int kruskal(vt<int>& edges, int min_comps) {
	int n = 0;
	irep(e, edges)
		n = max(n, max(get<0>(e), get<1>(e)) + 1);

	UnionFind un(n);
	sort(all(edges), [](const tuple<int, int, int>& v1, const tuple<int, int, int>& v2) { return get<2>(v1) < get<2>(v2); });
	rep(i, 0, sz(edges)) {
		if (un.join(get<0>(edges[i]), get<1>(edges[i]))) {
			n--;
			if (n == min_comps)
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
		vt<int> edges;
		rep(i, 0, p) {
			cin >> points[i];
			rep(j, 0, i)
				edges.pb({ i, j, points[i].dist2(points[j]) });
		}
		printf("%.2lf\n", sqrt(kruskal(edges, min_comps)));
	}
}
