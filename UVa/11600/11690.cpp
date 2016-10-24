#include <bits/stdc++.h>
#include "union_find.h"

int main() {
	int v, e, e1, e2;
	forX() {
		cin >> v >> e;
		UnionFind u(v);
		vi cost(v);
		read(cost);
		rep(i, 0, e) {
			cin >> e1 >> e2;
			u.join(e1, e2);
		}

		vvi comps = u.getComponents();
		bool possible = true;
		irep(comp, comps) {
			int c = 0;
			irep(val, comp)
				c += cost[val];
			if (c != 0) {
				possible = false;
				break;
			}
		}
		printf("%sPOSSIBLE\n", possible ? "" : "IM");
	}
}
