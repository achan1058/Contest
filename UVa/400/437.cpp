#include <bits/stdc++.h>
#include "topo_sort.h"

int main() {
	int n, X = 1;
	while (cin >> n && n != 0) {
		vvi blocks = mi(3 * n + 1, 3, 0);
		blocks[3 * n][0] = blocks[3 * n][1] = blocks[3 * n][2] = 0;

		for (int i = 0; i < 3 * n; i += 3) {
			cin >> blocks[i][0] >> blocks[i][1] >> blocks[i][2];
			sort(all(blocks[i]));
			blocks[i + 1][2] = blocks[i + 2][0] = blocks[i][1];
			blocks[i + 1][0] = blocks[i + 2][2] = blocks[i][0];
			blocks[i + 1][1] = blocks[i + 2][1] = blocks[i][2];
		}

		AdjList<int> graph(3 * n + 1);
		rep(i, 0, 3 * n + 1) {
			rep(j, 0, 3 * n + 1) {
				if (blocks[i][0] > blocks[j][0] && blocks[i][1] > blocks[j][1])
					graph.push(i, j, blocks[i][2]);
			}
		}

		printf("Case %d: maximum height = %d\n", X, longestDAG(graph).x);
		X++;
	}
}
