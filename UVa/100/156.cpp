#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	map<string, vs> anagram;
	while (cin >> s && s != "#") {
		string s2 = s;
		transform(all(s2), s2.begin(), ::tolower);
		sort(all(s2));
		anagram[s2].pb(s);
	}
	vs ans;
	irep(p, anagram) {
		if (sz(p.second) == 1)
			ans.pb(p.second[0]);
	}
	sort(all(ans));
	irep(a, ans)
		prints(a);
}
