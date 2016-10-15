#include <bits/stdc++.h>
#include "union_find.h"

int main() {
	int N, v, e, e1, e2;
	cin >> N;
	rep(X, 0, N) {
		cin >> v >> e;
		UnionFind u(v);
		vi cost(v);
		fori(val, cost)
			cin >> val;
		rep(i, 0, e) {
			cin >> e1 >> e2;
			u.join(e1, e2);
		}

		vvi comps = u.getComponents();
		bool possible = true;
		fori(comp, comps) {
			int c = 0;
			fori(val, comp)
				c += cost[val];
			if (c != 0) {
				possible = false;
				break;
			}
		}
		printf("%sPOSSIBLE\n", possible ? "" : "IM");
	}
}
