#include <bits/stdc++.h>
#include "union_find.h"

int main() {
	int v, e, X = 1, e1, e2;
	while (cin >> v >> e && (v | e) != 0) {
		UnionFind u(v);
		int e1, e2, num_comp = v;
		rep(i, 0, e) {
			cin >> e1 >> e2;
			e1--;
			e2--;

			if (u.join(e1, e2))
				num_comp--;
		}
		printf("Case %d: %d\n", X, num_comp);
		X++;
	}
}
