#include <bits/stdc++.h>
#include "util.h"
#include "components.h"

int main() {
	int n, m;
	string s1, s2;
	whileX(cin >> n >> m && (n | m) != 0) {
		Index<string> ind;
		vvi graph;
		for (int i = 0; i < m; i++) {
			cin >> s1 >> s2;
			int i1 = ind.getI(s1), i2 = ind.getI(s2);
			graph.resize(sz(ind));
			graph[i1].pb(i2);
		}

		vvi comp = stronglyConnectedBlocks(graph);
		printX("Calling circles for data set %d:\n", X);
		for (auto& block : comp) {
			bool first = true;
			for (auto& i : block) {
				printf("%s%s", first ? "" : ", ", ind.getL(i).c_str());
				first = false;
			}
			printf("\n");
		}
	}
}
