#include <bits/stdc++.h>
#include "matching.h"

class SegmentsAndPoints {
public:
	string isPossible(vector<int> p, vector<int> l, vector<int> r) {
		int n = sz(p);
		vvb graph = mb(n, n, false);
		rep(i, 0, n) {
			rep(j, 0, n) {
				if (p[i] >= l[j] && p[i] <= r[j])
					graph[i][j] = true;
			}
		}

		if (sz(matching(graph)) == n)
			return "Possible";
		else
			return "Impossible";

	}
};
