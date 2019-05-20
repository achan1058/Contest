#include <bits/stdc++.h>
#include "union_find.h"
#include "header.h"

int main() {
	forX() {
		char c;
		int n, v1, v2, join = 0, nojoin = 0;
		string s;
		cin >> n;
		UnionFind un(n);
		getline(cin, s);
		while (getline(cin, s) && s != "") {
			stringstream ss(s);
			ss >> c >> v1 >> v2;
			if (c == 'c')
				un.join(v1 - 1, v2 - 1);
			else if (un.find(v1 - 1) == un.find(v2 - 1))
				join++;
			else
				nojoin++;
		}
		printX("%d,%d\n", join, nojoin);
	}
}
