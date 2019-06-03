#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	string s;
	while (cin >> n >> s) {
		int mx = 0;
		string ans;
		unordered_map<string, int> count;
		rep(i, 0, sz(s) - n + 1) {
			string sub = s.substr(i, n);
			count[sub]++;
			if (count[sub] > mx) {
				mx = count[sub];
				ans = sub;
			}
		}
		print("%s", ans.c_str());
	}
}
