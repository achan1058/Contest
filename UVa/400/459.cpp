#include <bits/stdc++.h>
#include "union_find.h"

int main() {
	int N;
	char en;
	string s;
	cin >> N;
	rep(X, 0, N) {
		printf("%s", X > 0 ? "\n" : "");
		cin >> en;
		int n = en - 'A' + 1;
		UnionFind un(n);
		getline(cin, s);
		while (getline(cin, s) && s != "")
			un.join(s[0] - 'A', s[1] - 'A');

		printf("%d\n", sz(un.getComponentSizes()));
	}
}
 