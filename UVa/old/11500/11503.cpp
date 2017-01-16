#include <bits/stdc++.h>
#include "util.h"
#include "union_find.h"

int main() {
	forX() {
		Index<string> m;
		UnionFind u;
		string s1, s2;
		int n;
		cin >> n;
		rep(i, 0, n) {
			cin >> s1 >> s2;
			int n1 = m.getI(s1), n2 = m.getI(s2);
			u.join(n1, n2);
			printf("%d\n", u.getSize(n1));
		}
	}
}
