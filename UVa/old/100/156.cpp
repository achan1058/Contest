#include <bits/stdc++.h>
#include "header.h"

int main() {
	map<string, vs> m;
	string s;
	while (cin >> s && s != "#") {
		string low = s;
		transform(all(low), low.begin(), ::tolower);
		sort(all(low));
		m[low].pb(s);
	}
	vs ans;
	irep(p, m) {
		if (sz(p.y) == 1)
			ans.pb(p.y[0]);
	}
	sort(all(ans));
	irep(v, ans)
		printf("%s\n", v.c_str());
}
