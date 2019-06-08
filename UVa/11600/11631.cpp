#include <bits/stdc++.h>
#include "spanning_tree.h"
#include "header.h"

int main() {
	int v, e, v1, v2, c;
	while (cin >> v >> e && (v | e) != 0) {
		int total = 0;
		edge_list<int> edges;

		rep(i, 0, e) {
			cin >> v1 >> v2 >> c;
			total += c;
			edges.pb({ v1, v2, c });
		}
		print(total - get<0>(kruskal(edges, v)));
	}
}
