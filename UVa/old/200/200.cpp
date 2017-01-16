#include <bits/stdc++.h>
#include "topo_sort.h"
#include "util.h"

int main() {
	Index<char> mp;
	string cur, prev = "";
	vvi graph;

	while (cin >> cur && cur != "#") {
		rep(i, 0, min(sz(cur), sz(prev))) {
			int ci = mp.getI(cur[i]), pi = mp.getI(prev[i]);
			if (ci != pi) {
				graph.resize(sz(mp));
				graph[pi].pb(ci);
				break;
			}
		}

		prev = cur;
	}

	vi result = topoSort(graph);
	irep(v, result)
		printf("%c", mp.getL(v));
	printf("\n");
}
