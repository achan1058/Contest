#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n, ans = -inf, cur, v;
		cin >> n >> cur;
		rep(i, 1, n) {
			cin >> v;
			ans = max(ans, cur - v);
			cur = max(cur, v);
		}
		printd(ans);
	}
}
