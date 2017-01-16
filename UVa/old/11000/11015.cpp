#include <bits/stdc++.h>
#include "util.h"
#include "shortest_path.h"

int main() {
	int n, e, v1, v2, d;
	string s;
	whileX(cin >> n >> e && n != 0) {
		vvi graph = mi(n, n, inf);
		Index<string> ind;
		for (int i = 0; i < n; i++) {
			cin >> s;
			ind.getI(s);
			graph[i][i] = 0;
		}
		for (int i = 0; i < e; i++) {
			cin >> v1 >> v2 >> d;
			graph[v1 - 1][v2 - 1] = d;
			graph[v2 - 1][v1 - 1] = d;
		}

		vvi dist = floydWarshall(graph).first;
		int best = inf, pos = 0;
		for (int i = 0; i < n; i++) {
			int total = 0;
			for (int j = 0; j < n; j++)
				total += dist[i][j];
			if (total < best) {
				best = total;
				pos = i;
			}
		}
		printf("Case #%d : %s\n", X, ind.getL(pos).c_str());
	}
}
