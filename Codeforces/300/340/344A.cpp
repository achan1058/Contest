#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, ans = 0;
	cin >> n;
	string s;
	char c = ' ';
	rep(i, 0, n) {
		cin >> s;
		if (s[0] != c)
			ans++;
		c = s[0];
	}
	printv(ans);
}
