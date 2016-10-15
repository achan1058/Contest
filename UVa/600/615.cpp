#include <bits/stdc++.h>
#include "util.h"
#include "shortest_path.h"

int main() {
	int v1, v2, X = 1, numE = 0;
	Index<int> mp;
	AdjList<int> el;
	while (cin >> v1 >> v2 && (v1 != -1 || v2 != -1)) {
		if ((v1 | v2) == 0) {
			bool good = true;

			if (numE == 0)
				good = true;
			else if (sz(el) != numE + 1)
				good = false;
			else {
				vb indeg(sz(el), false);
				rep(i, 0, sz(el)) {
					irep(v, el[i]) {
						if (indeg[v.x]) {
							good = false;
							goto end;
						}
						indeg[v.x] = true;
					}
				}

				int root = 0;
				rep(i, 0, sz(el)) {
					if (!indeg[i]) {
						root = i;
						break;
					}
				}

				vi dist = dijkstra(el, root).x;
				rep(i, 0, sz(el)) {
					if (i != root && dist[i] == inf) {
						good = false;
						break;
					}
				}
			}
		end:;

			printf("Case %d is %sa tree.\n", X, good ? "" : "not ");
			mp = Index<int>();
			el = AdjList<int>();
			numE = 0;
			X++;
		} else {
			v1 = mp.getI(v1);
			v2 = mp.getI(v2);
			el.push(v1, v2);
			numE++;
		}
	}
}
