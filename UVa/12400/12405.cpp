#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n, ans = 0;
		string s;
		cin >> n >> s;
		rep(i, 0, n) {
			if (s[i] == '.') {
				ans++;
				i += 2;
			}
		}
		printc(ans);
	}
}
