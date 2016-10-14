#include <bits/stdc++.h>
#include "shortest_path.h"

class BuildingRoutes {
public:
	int build(vector<string> dist, int T) {
		int n = sz(dist);
		vvi graph = mi(n, n, 0);

		rep(i, 0, n) {
			rep(j, 0, n)
				graph[i][j] = dist[i][j] - '0';
		}

		vvi distgraph = floydWarshall(graph).first;
		vvi numuse = mi(n, n, 0);
		int total = 0;

		rep(i, 0, n) {
			rep(j, 0, n) {
				if (i == j)
					continue;
				rep(v1, 0, n) {
					rep(v2, 0, n) {
						if (v1 == v2)
							continue;
						if (distgraph[i][j] == distgraph[i][v1] + distgraph[v2][j] + graph[v1][v2])
							numuse[v1][v2]++;
					}
				}
			}
		}

		rep(i, 0, n) {
			rep(j, 0, n) {
				if (numuse[i][j] >= T)
					total += graph[i][j];
			}
		}

		return total;
	}
};
