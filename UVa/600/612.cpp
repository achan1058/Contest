#include <bits/stdc++.h>
#include "header.h"

int main() {
	int c, n;
	string s;
	forX() {
		vector<tuple<int, int, string>> strs;
		cin >> c >> n;
		printX("");
		rep(k, 0, n) {
			int invert = 0;
			cin >> s;

			drep(i, j, sz(s), i) {
				if (s[i] < s[j])
					invert++;
			}
			strs.pb(make_tuple(invert, k, s));
		}

		sort(all(strs));
		irep(t, strs)
			printf("%s\n", get<2>(t).c_str());
	}
}
