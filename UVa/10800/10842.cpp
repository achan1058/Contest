#include <bits/stdc++.h>
#include "spanning_tree.h"

int main() {
	int n, m, u, v, c;
	forX() {
		cin >> n >> m;
		EdgeList<int> edges(n);
		rep(i, 0, m) {
			cin >> u >> v >> c;
			edges.push(u, v, -c);
		}

		EdgeList<int> tree = get<2>(kruskal(edges));

		if (n == 1)
			printp("0\n");
		else
			printp("%d\n", -get<2>(tree[tree.numE() - 1]));
	}
}
