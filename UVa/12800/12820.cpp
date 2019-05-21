#include <bits/stdc++.h>
#include "utils.h"
#include "header.h"

bool isCool(const string& s) {
	map<char, bool> m;
	auto tal = tally(s);

	if (sz(tal) == 1)
		return false;
	irep(t, tal) {
		if (m[t.s])
			return false;
		m[t.s] = true;
	}
	return true;
}

int main() {
	int n;
	whileX(cin >> n) {
		int ans = 0;
		string s;
		rep(i, 0, n) {
			cin >> s;
			ans += (isCool(s) ? 1 : 0);
		}
		printc("%d", ans);
	}
}
