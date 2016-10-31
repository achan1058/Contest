#include <bits/stdc++.h>
#include "point.h"
#include "graph_util.h"

int main() {
	int n;
	while (cin >> n && n != -1) {
		vector<ptd> rings(n);
		vd radius(n);
		vvi graph(n);
		rep(i, 0, n) {
			cin >> rings[i] >> radius[i];
			rep(j, 0, i) {
				double d = rings[i].dist(rings[j]);
				if (radius[i] + radius[j] > d + eps && abs(radius[i] - radius[j]) < d - eps) {
					graph[i].pb(j);
					graph[j].pb(i);
				}
			}
		}

		int biggest = 0;
		vvi comps = getComponents(graph);
		irep(c, comps)
			biggest = max(biggest, sz(c));
		printf("The largest component contains %d ring%s.\n", biggest, biggest == 1 ? "" : "s");
	}
}
