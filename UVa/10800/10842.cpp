#include <bits/stdc++.h>
#include "spanning_tree.h"

int main() {
	int n, m, u, v, c;
	forX() {
		cin >> n >> m;
		vt<int> edges(n);
		rep(i, 0, m) {
			cin >> u >> v >> c;
			edges.pb({ u, v, -c });
		}

		vt<int> tree = get<2>(kruskal(edges));

		if (n == 1)
			printp("0\n");
		else
			printp("%d\n", -get<2>(tree[sz(tree) - 1]));
	}
}
