#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	vvi counts;
	while (getline(cin, s) && s != "#") {
		vi tally(26);
		irep(c, s)
			tally[c - 'a']++;
		counts.pb(tally);
	}
	while (getline(cin, s) && s != "#") {
		stringstream ss(s);
		vi tally(26);
		int ans = 0;
		char c;
		while(ss >> c)
			tally[c - 'a']++;
		irep(word, counts) {
			bool good = true;
			rep(i, 0, 26) {
				if (tally[i] < word[i]) {
					good = false;
					break;
				}
			}
			if (good)
				ans++;
		}
		printv(ans);
	}
}
