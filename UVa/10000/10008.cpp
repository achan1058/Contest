#include <bits/stdc++.h>
#include "header.h"

int main() {
	map<char, int> m;
	forX() {
		string s;
		getline(cin, s);
		irep(c, s) {
			if (isalpha(c))
				m[toupper(c)]++;
		}
	}

	vector<pair<int, char>> ans;
	irep(p, m)
		ans.pb({ -p.s, p.f });
	sort(all(ans));
	irep(p, ans)
		print("%c %d", p.s, -p.f);
}
