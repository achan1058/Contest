#include <bits/stdc++.h>
#include "util.h"

int main() {
	int n, v, p, X = 0;
	string s;
	while (cin >> n) {
		Index<string> mp;
		vs names(n);
		vi balance(n);
		rep(i, 0, n) {
			cin >> names[i];
			mp.getI(names[i]);
		}
		rep(i, 0, n) {
			cin >> s >> v >> p;
			if (p == 0)
				continue;
			v /= p;
			balance[mp.getI(s)] -= v * p;
			rep(j, 0, p) {
				cin >> s;
				balance[mp.getI(s)] += v;
			}
		}
		printf("%s", X > 0 ? "\n" : "");
		rep(i, 0, n)
			printf("%s %d\n", names[i].c_str(), balance[mp.getI(names[i])]);
		X++;
	}
}
