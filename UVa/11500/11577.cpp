#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		string s, ans;
		map<char, int> m;
		getline(cin, s);
		irep(c, s) {
			if (isalpha(c))
				m[tolower(c)]++;
		}
		int best = 0;
		irep(c, m) {
			if (c.second > best) {
				best = c.second;
				ans = c.first;
			} else if (c.second == best)
				ans += c.first;
		}

		sort(all(ans));
		print("%s", ans.c_str());
	}
}
