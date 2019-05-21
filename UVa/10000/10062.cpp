#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	whileX(getline(cin, s)) {
		map<char, int> m;
		irep(c, s)
			m[c]++;
		vector<pii> ans;

		irep(p, m)
			ans.pb({ p.s, -p.f });
		sort(all(ans));

		printX("");
		irep(p, ans)
			print("%d %d", -p.s, p.f);
	}
}
