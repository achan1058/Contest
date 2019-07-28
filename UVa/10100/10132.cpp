#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	forX(true) {
		map<int, set<string>> m;
		while (getline(cin, s) && s != "")
			m[sz(s)].insert(s);

		int n = m.begin()->first + m.rbegin()->first;
		vs possible;
		rep(i, 0, n / 2 + 1) {
			vs cur;
			irep(s1, m[i]) {
				irep(s2, m[n - i]) {
					cur.pb(s1 + s2);
					cur.pb(s2 + s1);
				}
			}
			sort(all(cur));

			if (!cur.empty()) {
				if (possible.empty())
					possible = cur;
				else
					possible.erase(set_intersection(all(possible), all(cur), possible.begin()), possible.end());
			}
		}
		printX(possible[0]);
	}
}
