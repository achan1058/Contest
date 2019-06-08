#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		string s1, s2, s;
		vector<pair<string, string>> pairs;
		getline(cin, s);
		rep(i, 0, n) {
			getline(cin, s1);
			getline(cin, s2);
			pairs.pb({ s1, s2 });
		}
		getline(cin, s);
		irep(p, pairs) {
			while (true) {
				int t = s.find(p.first);
				if (t == string::npos)
					break;
				s = s.substr(0, t) + p.second + s.substr(t + sz(p.first));
			}
		}
		prints(s);
	}
}
