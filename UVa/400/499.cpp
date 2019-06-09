#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	while (getline(cin, s)) {
		map<char, int> count;
		int best = 0;
		irep(c, s) {
			if (isalpha(c)) {
				count[c]++;
				best = max(best, count[c]);
			}
		}
		string ans;
		irep(c, count) {
			if (c.second == best)
				ans.pb(c.first);
		}
		print(ans, best);
	}
}
