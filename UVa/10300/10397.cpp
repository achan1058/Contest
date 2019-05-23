#include <bits/stdc++.h>
#include "point.h"
#include "spanning_tree.h"
#include "header.h"

int main() {
	int n, m, v1, v2;
	while (cin >> n) {
		vector<ptd> coords(n);
		read(coords);
		edge_list<double> e;
		drep(i, j, n, i)
			e.pb({ i, j, coords[i].dist(coords[j]) });
		cin >> m;
		rep(i, 0, m) {
			cin >> v1 >> v2;
			e.pb({ v1 - 1, v2 - 1, 0 });
		}
		print("%.2f", get<0>(kruskal(e, n)));
	}
}
