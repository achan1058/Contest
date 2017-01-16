#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	string s;
	whileX(cin >> n) {
		int total = 0;
		rep(i, 0, n) {
			map<char, int> numchars;
			cin >> s;
			irep(c, s)
				numchars[c]++;

			set<int> charset;
			irep(p, numchars)
				charset.insert(p.y);

			total += (sz(charset) == sz(numchars) && sz(charset) != 1);
		}

		printc("%d\n", total);
	}
}
