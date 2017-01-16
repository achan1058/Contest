#include <bits/stdc++.h>
#include "util.h"

int main() {
	int n, v, p;
	string s;
	whileX(cin >> n) {
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
		printX("");
		rep(i, 0, n)
			printf("%s %d\n", names[i].c_str(), balance[mp.getI(names[i])]);
	}
}
