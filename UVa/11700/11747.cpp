#include <bits/stdc++.h>
#include "spanning_tree.h"
#include "header.h"

int main() {
	int n, e, v1, v2, w;
	whileX(cin >> n >> e && (n | e) != 0) {
		edge_list<int> edges;
		rep(i, 0, e) {
			cin >> v1 >> v2 >> w;
			edges.pb({ v1, v2, w });
		}

		auto tree = get<2>(kruskal(edges, n));
		if (sz(tree) == sz(edges)) {
			print("forest");
			continue;
		}

		int t = 0;
		bool first = true;
		irep(e, edges) {
			if (t < sz(tree) && e == tree[t]) {
				t++;
				continue;
			}
			printf("%s%d", first ? "" : " ", get<2>(e));
			first = false;
		}
		print("");
	}
}
