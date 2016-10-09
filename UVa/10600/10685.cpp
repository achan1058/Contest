#include <bits/stdc++.h>
#include "union_find.h"
#include "util.h"

int main() {
	int c, r;
	string s1, s2;
	while (cin >> c >> r && (c | r) != 0) {
		Index<string> ind;
		UnionFind un;
		int mx = 1;
		for (int i = 0; i < c; i++) {
			cin >> s1;
			ind.getI(s1);
		}
		for (int i = 0; i < r; i++) {
			cin >> s1 >> s2;
			un.join(ind.getI(s1), ind.getI(s2));
		}
		for (int i = 0; i < c; i++)
			mx = max(mx, un.getSize(i));
		printf("%d\n", mx);
	}
}
