#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi fibs = { 1, 2 };
	while (fibs.back() <= 1000000000)
		fibs.pb(fibs.back() + fibs[sz(fibs) - 2]);
	forX() {
		int n;
		string ans;
		cin >> n;
		int t = n;
		rrep(i, sz(fibs) - 1, 0) {
			if (t >= fibs[i]) {
				t -= fibs[i];
				ans += '1';
			} else if (!ans.empty()) {
				ans += '0';
			}
		}
		print("%d = %s (fib)", n, ans.c_str());
	}
}
