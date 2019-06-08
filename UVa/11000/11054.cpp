#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		ll ans = 0;
		int t = 0, v;
		rep(i, 0, n) {
			cin >> v;
			t += v;
			ans += abs(t);
		}
		printl(ans);
	}
}
