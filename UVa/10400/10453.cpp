#include <bits/stdc++.h>
#include "dp_algs.h"

int main() {
	string s1;
	while (cin >> s1) {
		string s2 = s1;
		reverse(all(s2));
		vector<char> s = lcs(vector<char>(all(s1)), vector<char>(all(s2)));

		string ans;
		int i1 = 0, i2 = 0;
		while (s1[i1] != s[0]) {
			ans.pb(s1[i1]);
			i1++;
		}
		while (s2[i2] != s[0]) {
			ans.pb(s2[i2]);
			i2++;
		}

		rep(i, 0, sz(s) / 2) {
			ans.pb(s[i]);
			i1++;
			i2++;

			while (s1[i1] != s[i + 1]) {
				ans.pb(s1[i1]);
				i1++;
			}
			while (s2[i2] != s[i + 1]) {
				ans.pb(s2[i2]);
				i2++;
			}
		}

		string ans2 = ans;
		reverse(all(ans2));

		if (sz(s) % 2 == 1)
			ans += s[sz(s) / 2];
		ans += ans2;
		printf("%d %s\n", sz(ans) - sz(s1), ans.c_str());
	}
}
