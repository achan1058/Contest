#include <bits/stdc++.h>
#include "util.h"
#include "shortest_path.h"

int main() {
	int n, e, v1, v2, X = 1;
	string s1, s2;
	while (cin >> n >> e && (n | e) != 0) {
		Index<string> m;
		vvi graph = mi(n, n, inf);
		rep(i, 0, e) {
			cin >> s1 >> s2;
			v1 = m.getI(s1);
			v2 = m.getI(s2);
			graph[v1][v2] = graph[v2][v1] = 1;
		}

		vvi dist = floydWarshall(graph).x;
		int maxdist = 0;
		rep(i, 0, n) {
			rep(j, 0, n)
				if (i != j)
					maxdist = max(maxdist, dist[i][j]);
		}

		if (maxdist == inf)
			printf("Network %d: DISCONNECTED\n\n", X);
		else
			printf("Network %d: %d\n\n", X, maxdist);
		X++;
	}
}
