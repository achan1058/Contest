#include <bits/stdc++.h>
#include "union_find.h"
#include "header.h"

int main() {
	forX() {
		int n, m;
		cin >> n >> m;
		UnionFind un(n);
		rep(i, 0, m) {
			int v1, v2;
			cin >> v1 >> v2;
			un.join(v1 - 1, v2 - 1);
		}

		int ans = 1;
		rep(i, 0, n)
			ans = max(ans, un.getSize(i));
		printd(ans);
	}
}
