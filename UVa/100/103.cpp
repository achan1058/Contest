#include <bits/stdc++.h>
#include "topo_sort.h"

int main() {
	int n, d;

	while (cin >> n >> d) {
		vvi graph(n), boxes = mi(n, d, 0);
		rep(i, 0, n) {
			fori(b, boxes[i])
				cin >> b;
			sort(all(boxes[i]));
		}

		rep(i, 0, n) {
			rep(j, 0, n) {
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
		}

		vi result = longestDAG(graph);
		bool fs = true;
		printf("%d\n", sz(result));
		fori(v, result) {
			printf("%s%d", (fs ? "" : " "), v + 1);
			fs = false;
		}
		printf("\n");
	}
}
