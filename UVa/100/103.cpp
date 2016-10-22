#include <bits/stdc++.h>
#include "topo_sort.h"

int main() {
	int n, d;

	while (cin >> n >> d) {
		vvi graph(n), boxes = mi(n, d, 0);
		rep(i, 0, n) {
			read(boxes[i]);
			sort(all(boxes[i]));
		}

		drep(i, j, n, n) {
			bool ls = true;
			rep(k, 0, d) {
				if (boxes[i][k] >= boxes[j][k]) {
					ls = false;
					break;
				}
			}
			if (ls)
				graph[i].pb(j);
		}

		vi result = longestDAG(graph);
		bool fs = true;
		printf("%d\n", sz(result));
		irep(v, result) {
			printf("%s%d", (fs ? "" : " "), v + 1);
			fs = false;
		}
		printf("\n");
	}
}
