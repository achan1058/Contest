#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	while (cin >> s && s != "0") {
		ll ans = 0, base = 1;
		rrep(i, sz(s) - 1, 0) {
			ans += base * (s[i] - '0');
			base = 2 * base + 1;
		}
		print(ans);
	}
}
