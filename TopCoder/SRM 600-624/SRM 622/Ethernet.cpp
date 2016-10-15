#include <bits/stdc++.h>
#include "header.h"

vvi children;
int counter;

int recurse(vector<int>& parent, vector<int>& dist, int maxDist, int v = 0) {
	cout.flush();
	vector<pii> childnum;
	fori(c, children[v])
		childnum.pb({ recurse(parent, dist, maxDist, c) + dist[c - 1], c });

	sort(all(childnum));
	while (sz(childnum) >= 1 && childnum.back().first > maxDist) {
		counter++;
		childnum.pop_back();
	}
	while (sz(childnum) >= 2 && childnum.back().first + childnum[sz(childnum) - 2].first > maxDist) {
		counter++;
		childnum.pop_back();
	}

	int r = 0;
	if (sz(childnum) != 0)
		r = childnum.back().first;

	return r;
}

class Ethernet {
public:
	int connect(vector<int> parent, vector<int> dist, int maxDist) {
		int n = sz(parent) + 1;
		children = mi(n, 0, 0);
		counter = 0;

		rep(i, 0, n - 1)
			children[parent[i]].pb(i + 1);

		recurse(parent, dist, maxDist);
		counter++;

		return counter;
	}
};
