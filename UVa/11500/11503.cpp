#include <bits/stdc++.h>
#include "utils.h"
#include "union_find.h"
#include "header.h"

int main() {
	forX() {
		int n;
		cin >> n;
		string s1, s2;
		mapper<string> m;
		UnionFind un;

		rep(i, 0, n) {
			cin >> s1 >> s2;
			int v1 = m.map(s1), v2 = m.map(s2);
			un.join(v1, v2);
			printv(un.getSize(v1));
		}
	}
}
