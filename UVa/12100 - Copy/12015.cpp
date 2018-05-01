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
		print("Case #%d:", X);
		irep(a, ans)
			print("%s", a.c_str());
	}
}
