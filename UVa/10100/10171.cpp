#include <bits/stdc++.h>
#include "shortest_path.h"
#include "header.h"

int main() {
	int e, c;
	char y, d, v1, v2, s0, s1;
	while (cin >> e && e != 0) {
		vector<adj_list<int>> graphs = { adj_list<int>(26), adj_list<int>(26) };
		rep(i, 0, e) {
			cin >> y >> d >> v1 >> v2 >> c;
			int t = y == 'Y' ? 0 : 1;
			graphs[t][v1 - 'A'].pb({ v2 - 'A', c });
			if (d == 'B')
				graphs[t][v2 - 'A'].pb({ v1 - 'A', c });
		}

		cin >> s0 >> s1;
		vvi cost(2);
		vi c0 = dijkstra(graphs[0], s0 - 'A').first;
		vi c1 = dijkstra(graphs[1], s1 - 'A').first;
		c0[s0 - 'A'] = c1[s1 - 'A'] = 0;
		int best = inf;
		vector<char> ans;
		rep(i, 0, 26) {
			if (c0[i] + c1[i] < best) {
				best = c0[i] + c1[i];
				ans.clear();
			}
			if (c0[i] + c1[i] == best)
				ans.pb(i + 'A');
		}

		if (best == inf) {
			print("You will never meet.");
		} else {
			printf("%d ", best);
			print(ans);
		}
	}
}
