#include <bits/stdc++.h>
#include "union_find.h"
#include "utils.h"
#include "header.h"

int main() {
	int n, t;
	string s1, s2;
	while (cin >> n >> t && (n | t) != 0) {
		mapper<string> m;
		UnionFind un(n);
		rep(i, 0, n) {
			cin >> s1;
			m.map(s1);
		}
		rep(i, 0, t) {
			cin >> s1 >> s2;
			un.join(m.map(s1), m.map(s2));
		}
		vvi comps = un.getComponents();
		int ans = 0;
		irep(c, comps)
			ans = max(ans, sz(c));
		print(ans);
	}
}
