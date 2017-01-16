#include <bits/stdc++.h>
#include "shortest_path.h"

int main() {
	int e, q;
	string s1, s2;
	forX() {
		printX("");
		vs name(26);
		vvi graph = mi(26, 26, inf);
		cin >> e >> q;
		rep(i, 0, e) {
			cin >> s1 >> s2;
			int v1 = s1[0] - 'A', v2 = s2[0] - 'A';
			graph[v1][v2] = graph[v2][v1] = 1;
		}

		vvi paths = floydWarshall(graph).y;
		rep(i, 0, q) {
			cin >> s1 >> s2;
			int v1 = s1[0] - 'A', v2 = s2[0] - 'A';
			vi path = getPath(paths[v1], v1, v2);
			irep(c, path)
				printf("%c", char(c + 'A'));
			printf("\n");
		}
	}
}
