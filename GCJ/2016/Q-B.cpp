#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	forX() {
		int ans = 0;
		cin >> s;

		rep(i, 1, sz(s))
			if (s[i] != s[i - 1])
				ans++;
		if (s.back() != '+')
			ans++;

		printp("%d\n", ans);
	}
}
