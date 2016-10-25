#include <bits/stdc++.h>
#include "union_find.h"

int main() {
	char en;
	string s;
	forX() {
		cin >> en;
		int n = en - 'A' + 1;
		UnionFind un(n);
		getline(cin, s);
		while (getline(cin, s) && s != "")
			un.join(s[0] - 'A', s[1] - 'A');

		printX("%d\n", sz(un.getComponentSizes()));
	}
}
