#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int t, n, v;
		cin >> t >> n;
		vi ans(10001, inf);
		ans[0] = 0;
		rep(i, 0, n) {
			cin >> v;
			rrep(j, 10000, v)
				ans[j] = min(ans[j], ans[j - v] + 1);
		}
		rep(i, t, 10001) {
			if (ans[i] != inf) {
				print(i, ans[i]);
				break;
			}
		}
	}
}
