#include <bits/stdc++.h>
#include "topo_sort.h"
#include "header.h"

int main() {
	int n, d;
	while (cin >> n >> d) {
		vvi boxes = mi(n, d, 0);
		adj_list<int> graph(n);
		rep(i, 0, n) {
			read(boxes[i]);
			sort(all(boxes[i]));
		}
		drep(i, j, n, n) {
			bool good = true;
			rep(k, 0, d)
				good = good && boxes[i][k] < boxes[j][k];
			if (good)
				graph[i].pb({ j, 1 });
		}
		vi path = longestDAG(graph).second;
		print(sz(path));
		rep(i, 0, sz(path))
			printf("%d%c", path[i] + 1, i == sz(path) - 1 ? '\n' : ' ');
	}
}
