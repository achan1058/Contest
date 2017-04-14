#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int m, ans = 0, up = 0;
		string s;
		cin >> m >> s;
		rep(i, 0, m + 1) {
			if (up < i) {
				ans += i - up;
				up = i;
			}
			up += s[i] - '0';
		}

		printp("%d\n", ans);
	}
}