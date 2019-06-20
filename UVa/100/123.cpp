#include <bits/stdc++.h>
#include "utils.h"
#include "header.h"

int main() {
	string s;
	set<string> ignore;
	while (getline(cin, s) && s != "::")
		ignore.insert(s);
	map<string, vvs> ans;
	while (getline(cin, s)) {
		transform(all(s), s.begin(), ::tolower);
		vs t = tokenize(s);
		rep(i, 0, sz(t)) {
			if (ignore.find(t[i]) != ignore.end())
				continue;
			vs t2 = t;
			transform(all(t2[i]), t2[i].begin(), ::toupper);
			ans[t[i]].pb(t2);
		}
	}
	irep(a, ans) {
		irep(t, a.second)
			print(t);
	}
}
