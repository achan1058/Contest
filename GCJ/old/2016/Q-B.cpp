#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int ans = 0;
		string s;
		cin >> s;
		s.pb('+');
		rep(i, 1, sz(s)) {
			if (s[i] != s[i - 1])
				ans++;
		}
		printp("%d\n", ans);
	}
}