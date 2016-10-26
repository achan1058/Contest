#include <bits/stdc++.h>
#include "union_find.h"

int main() {
	int n, v1, v2;
	char c;
	string s;
	forX() {
		cin >> n;
		getline(cin, s);
		UnionFind un(n + 1);
		int yes = 0, no = 0;
		while (getline(cin, s) && s != "") {
			stringstream(s) >> c >> v1 >> v2;
			if (c == 'c')
				un.join(v1, v2);
			else if (un.find(v1) == un.find(v2))
				yes++;
			else
				no++;
		}
		printX("%d,%d\n", yes, no);
	}
}
