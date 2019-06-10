#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		string s;
		cin >> s;
		vi tally(26);
		irep(c, s)
			tally[c - 'a']++;
		int ans = inf;
		irep(t, tally)
			ans = min(t, ans);
		printc(ans);
	}
}
