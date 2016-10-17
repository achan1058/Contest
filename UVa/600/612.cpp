#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N, c, n;
	string s;
	cin >> N;
	rep(X, 0, N) {
		vector<tuple<int, int, string>> strs;
		cin >> c >> n;
		printf("%s", X > 0 ? "\n" : "");
		rep(k, 0, n) {
			int invert = 0;
			cin >> s;

			rep(i, 0, sz(s)) {
				rep(j, 0, i) {
					if (s[i] < s[j])
						invert++;
				}
			}
			strs.pb(make_tuple(invert, k, s));
		}

		sort(all(strs));
		irep(t, strs)
			printf("%s\n", get<2>(t).c_str());
	}
}
