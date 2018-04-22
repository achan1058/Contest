#include <bits/stdc++.h>
#include "header.h"

int main() {
	map<char, int> freq;
	forX() {
		string s;
		rep(i, 0, X) {
			getline(cin, s);
			irep(c, s) {
				if (isalpha(c))
					freq[toupper(c)]++;
			}
		}
	}
	vector<pair<int, char>> ans;
	irep(p, freq)
		ans.pb({ -p.y, p.x });

	sort(all(ans));
	irep(p, ans)
		printf("%c %d\n", p.y, -p.x);
}
