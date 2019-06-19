#include <bits/stdc++.h>
#include "header.h"

int dist(char a, char b) {
	int d = abs(a - b);
	return min(d, 26 - d);
}

int main() {
	string s;
	cin >> s;
	int ans = dist('a', s[0]);
	rep(i, 1, sz(s))
		ans += dist(s[i - 1], s[i]);
	print(ans);
}
