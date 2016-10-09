#include <bits/stdc++.h>
#include "union_find.h"

int main() {
	int N, n, e, e1, e2;
	cin >> N;
	rep(X, 0, N) {
		cin >> n >> e;
		UnionFind un(n);
		rep(i, 0, e) {
			cin >> e1 >> e2;
			un.join(e1 - 1, e2 - 1);
		}

		int max_comp = 0;
		vi comps = un.getComponentSizes();
		irep(v, comps)
			max_comp = max(max_comp, v);

		printf("%d\n", max_comp);
	}
}
