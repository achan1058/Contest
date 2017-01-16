#include <bits/stdc++.h>
#include "point.h"
#include "union_find.h"

int main() {
	int n;
	while (cin >> n && n != -1) {
		vector<ptd> rings(n);
		vd radius(n);
		UnionFind graph(n);
		rep(i, 0, n) {
			cin >> rings[i] >> radius[i];
			rep(j, 0, i) {
				double d = rings[i].dist(rings[j]);
				if (radius[i] + radius[j] > d + eps && abs(radius[i] - radius[j]) < d - eps)
					graph.join(i, j);
			}
		}

		int biggest = 0;
		vi comps = graph.getComponentSizes();
		irep(v, comps)
			biggest = max(biggest, v);
		printf("The largest component contains %d ring%s.\n", biggest, biggest == 1 ? "" : "s");
	}
}
