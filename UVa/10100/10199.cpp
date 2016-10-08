#include <bits/stdc++.h>
#include "components.h"
#include "util.h"

int main() {
	int n, m, X = 1;
	string s1, s2;
	while (cin >> n && n != 0) {
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
			graph[i2].pb(i1);
		}

		vector<int> pt = getArticulationPoints(graph);
		vector<string> ans;
		printf("%sCity map #%d: %d camera(s) found\n", X > 1 ? "\n" : "", X, pt.size());
		for (auto& i : pt)
			ans.push_back(ind.getL(i));
		sort(ans.begin(), ans.end());
		for (auto& s : ans)
			printf("%s\n", s.c_str());
		X++;
	}
}
