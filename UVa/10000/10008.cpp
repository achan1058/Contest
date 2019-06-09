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
		ans.pb({ -p.second, p.first });
	sort(all(ans));
	irep(p, ans)
		print(p.second, -p.first);
}
