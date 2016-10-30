#include <bits/stdc++.h>
#include "spanning_tree.h"

int main() {
	int v, e, a, v1, v2, w;
	forX() {
		cin >> v >> e >> a;
		vt<int> roads;
		rep(i, 0, e) {
			cin >> v1 >> v2 >> w;
			if (w < a)
				roads.pb({ v1 - 1, v2 - 1, w });
		}
		auto ans = kruskal(roads, v);
		printp("%d %d\n", get<0>(ans) + get<1>(ans) * a, get<1>(ans));
	}
}
