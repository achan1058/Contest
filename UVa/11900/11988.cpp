#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	while (cin >> s) {
		unordered_map<int, string> m;
		int mn = 0, mx = 0, cur = 0;
		m[cur] = "";
		irep(c, s) {
			if (c == '[') {
				mn--;
				cur = mn;
				m[cur] = "";
			} else if (c == ']') {
				mx++;
				cur = mx;
				m[cur] = "";
			} else {
				m[cur].pb(c);
			}
		}
		rep(i, mn, mx + 1)
			printf("%s", m[i].c_str());
		print("");
	}
}
