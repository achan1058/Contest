#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	whileX(cin >> s) {
		int n, a, b;
		vi tally(sz(s) + 1);
		rep(i, 0, sz(s))
			tally[i + 1] = tally[i] + s[i] - '0';
		cin >> n;
		printcn();
		rep(i, 0, n) {
			cin >> a >> b;
			if (a > b)
				swap(a, b);
			int diff = tally[b + 1] - tally[a];
			print(diff == 0 || diff == b - a + 1 ? "Yes" : "No");
		}
	}
}
