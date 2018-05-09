#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	cin >> s;
	vi tally(sz(s) + 1);
	rep(i, 0, sz(s))
		tally[i + 1] = tally[i] + s[i] - '0';
	rep(i, 7, sz(s) + 1) {
		if (tally[i] - tally[i - 7] == 0 || tally[i] - tally[i - 7] == 7) {
			print("YES");
			return 0;
		}
	}
	print("NO");
}
