#include <bits/stdc++.h>
#include "util.h"
#include "topo_sort.h"

int main() {
	int n, m, X = 1;
	string s1, s2;
	while (cin >> n) {
		vvi graph(n);
		Index<string> ind;
		for (int i = 0; i < n; i++) {
			cin >> s1;
			ind.getI(s1);
		}
		cin >> m;
		for (int i = 0; i < m; i++) {
			cin >> s1 >> s2;
			int i1 = ind.getI(s1), i2 = ind.getI(s2);
			graph[i1].pb(i2);
		}
		vector<int> order = topoSort(graph);
		printf("Case #%d: Dilbert should drink beverages in this order:", X);
		for (int i : order)
			printf(" %s", ind.getL(i).c_str());
		printf(".\n\n");
		X++;
	}
}
