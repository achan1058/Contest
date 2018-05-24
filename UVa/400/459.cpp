#include <bits/stdc++.h>
#include "union_find.h"
#include "header.h"

int main() {
	forX() {
		char c;
		string s;
		cin >> c;
		getline(cin, s);
		UnionFind un(c - 'A' + 1);
		while (getline(cin, s) && s != "")
			un.join(s[0] - 'A', s[1] - 'A');
		printX("%d\n", sz(un.getComponents()));
	}
}
