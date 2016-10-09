#include <bits/stdc++.h>
#include "union_find.h"

int main() {
	int N, n;
	cin >> N;
	string s, s0, s1, s2;
	rep(X, 0, N) {
		printf("%s", X > 0 ? "\n" : "");
		cin >> n;
		getline(cin, s);
		UnionFind un(n);
		int yes = 0, no = 0;
		while (getline(cin, s) && s != "") {
			stringstream ss(s);
			ss >> s0 >> s1 >> s2;
			int v1 = stoi(s1) - 1, v2 = stoi(s2) - 1;
			if (s0 == "c")
				un.join(v1, v2);
			else if (un.find(v1) == un.find(v2))
				yes++;
			else
				no++;
		}
		printf("%d,%d\n", yes, no);
	}
}
