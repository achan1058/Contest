#include <bits/stdc++.h>
#include "util.h"

int main() {
	string s;
	Index<string> m;
	vi count;
	while (cin >> s) {
		int i = m.getI(s);
		if (i == sz(count))
			count.pb(1);
		else
			count[i]++;
	}
	rep(i, 0, sz(count))
		printf("%s %d\n", m.getL(i).c_str(), count[i]);
}
 