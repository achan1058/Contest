#include <bits/stdc++.h>
#include "util.h"
#include "shortest_path.h"

int main() {
	int v1, v2;
	whileX(cin >> v1 >> v2 && (v1 != -1 || v2 != -1)) {
		Index<int> mp;
		vvp<int> edges;
		int numE = 0;
		while ((v1 | v2) != 0) {
			v1 = mp.getI(v1);
			v2 = mp.getI(v2);
			edges.resize(sz(mp));
			edges[v1].pb({ v2, 1 });
			numE++;
			cin >> v1 >> v2;
		}

		bool good = true;

		if (numE == 0)
			good = true;
		else if (sz(edges) != numE + 1)
			good = false;
		else {
			vb indeg(sz(edges), false);
			irep(v, edges) {
				irep(e, v) {
					if (indeg[e.x]) {
						good = false;
						goto end;
					}
					indeg[e.x] = true;
				}
			}

			int root = 0;
			rep(i, 0, sz(edges)) {
				if (!indeg[i]) {
					root = i;
					break;
				}
			}

			vi dist = dijkstra(edges, root).x;
			rep(i, 0, sz(edges)) {
				if (i != root && dist[i] == inf) {
					good = false;
					break;
				}
			}
		}
	end:;

		printf("Case %d is %sa tree.\n", X, good ? "" : "not ");
	}
}
