#include <bits/stdc++.h>
#include "segment_tree.h"
#include "header.h"

int main() {
	int n, k, v1, v2;
	char c;
	while (cin >> n >> k) {
		vi zv(n), nv(n);
		rep(i, 0, n) {
			cin >> v1;
			zv[i] = v1 == 0 ? 1 : 0;
			nv[i] = v1 < 0 ? 1 : 0;
		}
		SegmentTree<int> zero(zv, true), neg(nv, true);

		rep(i, 0, k) {
			cin >> c >> v1 >> v2;
			if (c == 'C') {
				zero.update(v1 - 1, v2 == 0 ? 1 : 0);
				neg.update(v1 - 1, v2 < 0 ? 1 : 0);
			} else {
				printv(zero.query(v1 - 1, v2 - 1) > 0 ? '0' : neg.query(v1 - 1, v2 - 1) % 2 ? '-' : '+');
			}
		}
		print();
	}
}
