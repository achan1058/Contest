#include <bits/stdc++.h>
#include "topo_sort.h"
#include "combinatorics.h"

class SimilarNames2 {
public:
	int count(vector<string> names, int L) {
		int n = sz(names);
		vvi graph(n);
		vvl numpath = ml(n, n, 0);
		vl tb = factTable(n + 1, mod);
		rep(i, 0, n) {
			numpath[0][i] = 1;
			rep(j, 0, n) {
				if (sz(names[i]) >= sz(names[j]))
					continue;
				if (names[i] == names[j].substr(0, sz(names[i])))
					graph[i].pb(j);
			}
		}

		vi sorted = topoSort(graph);
		rep(i, 1, L) {
			fori(v1, sorted) {
				fori(v2, graph[v1])
					numpath[i][v2] = add(numpath[i][v2], numpath[i - 1][v1]);
			}
		}
		ll total = 0;
		rep(j, 0, n)
			total = add(total, numpath[L - 1][j]);
		return int(mul(total, tb[n - L]));
	}
};
