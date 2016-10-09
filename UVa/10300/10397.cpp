#include <bits/stdc++.h>
#include "point.h"
#include "spanning_tree.h"

int main() {
	int n;
	while (cin >> n) {
		vector<ptd> cood(n);
		EdgeList<double> edges;
		rep(i, 0, n) {
			cin >> cood[i];
			rep(j, 0, i)
				edges.push(i, j, cood[i].dist(cood[j]));
		}

		int e, v1, v2;
		cin >> e;
		rep(i, 0, e) {
			cin >> v1 >> v2;
			edges.push(v1 - 1, v2 - 1, 0);
		}

		double result = get<0>(kruskal(edges));
		printf("%.2f\n", result);
	}
}
