#include <bits/stdc++.h>
#include "spanning_tree.h"

int main() {
	int v, e;
	while (cin >> v >> e && (v | e) != 0) {
		int v1, v2, ev, total = 0;
		vvp<int> edges(v);
		rep(i, 0, e) {
			cin >> v1 >> v2 >> ev;
			edges[v1].pb({ v2, ev });
			edges[v2].pb({ v1, ev });
			total += ev;
		}
		printf("%d\n", total - get<0>(prim(edges)));
	}
}
