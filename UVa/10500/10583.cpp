#include <bits/stdc++.h>
#include "union_find.h"
#include "header.h"

int main() {
	int n, m;
	whileX(cin >> n >> m && (n | m) != 0) {
		UnionFind un(n);
		int a, b;
		rep(i, 0, m) {
			cin >> a >> b;
			un.join(a - 1, b - 1);
		}
		printc(sz(un.getComponents()));
	}
}
