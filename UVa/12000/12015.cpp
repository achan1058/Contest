#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int best = -inf, v;
		vs ans;
		string s;
		rep(i, 0, 10) {
			cin >> s >> v;
			if (v > best) {
				best = v;
				ans.clear();
			}

			if (best == v)
				ans.pb(s);
		}
		printp();
		print(ans, true);
	}
}
