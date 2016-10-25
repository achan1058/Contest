#include <bits/stdc++.h>
#include "union_find.h"

int main() {
	int v, e, e1, e2;
	whileX(cin >> v >> e && (v | e) != 0) {
		UnionFind u(v);
		int num_comp = v;
		rep(i, 0, e) {
			cin >> e1 >> e2;
			e1--;
			e2--;

			if (u.join(e1, e2))
				num_comp--;
		}
		printc("%d\n", num_comp);
	}
}
