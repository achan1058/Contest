#include <bits/stdc++.h>
#include "util.h"
#include "shortest_path.h"

int main() {
	int n, e, val;
	whileX(cin >> n >> e && (n | e) != 0) {
		string s1, s2;
		vvi graph = mi(n, n, 0);
		Index<string> label_map;

		rep(i, 0, e) {
			cin >> s1 >> s2 >> val;
			int t1 = label_map.getI(s1), t2 = label_map.getI(s2);
			graph[t1][t2] = -val;
			graph[t2][t1] = -val;
		}

		vvi result = floydWarshall(graph, 0, true).x;
		cin >> s1 >> s2;
		printf("Scenario #%d\n%d tons\n\n", X, -result[label_map.getI(s1)][label_map.getI(s2)]);
	}
}
