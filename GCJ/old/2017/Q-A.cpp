#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		string s;
		int n, count = 0;
		cin >> s >> n;
		rep(i, 0, sz(s) - n + 1) {
			if (s[i] == '-') {
				count++;
				rep(j, i, i + n)
					s[j] = (s[j] == '+' ? '-' : '+');
			}
		}

		bool good = true;
		rep(i, sz(s) - n + 1, sz(s)) {
			if (s[i] == '-') {
				good = false;
				break;
			}
		}

		if (good)
			printp("%d\n", count);
		else
			printp("IMPOSSIBLE\n");
	}
}