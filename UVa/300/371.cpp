#include <bits/stdc++.h>
#include "header.h"

int ack(ll n) {
	if (n == 1)
		return 3;
	int ans;
	for (ans = 0; n != 1; ans++) {
		if (n % 2)
			n = 3 * n + 1;
		else
			n /= 2;
	}
	return ans;
}

int main() {
	ll l, h;
	while (cin >> l >> h && (l | h) != 0) {
		if (l > h)
			swap(l, h);
		pair<ll, int> ans;
		rep(i, l, h + 1) {
			int len = ack(i);
			if (len > ans.second)
				ans = { i, len };
		}
		print("Between %lld and %lld, %lld generates the longest sequence of %d values.", l, h, ans.first, ans.second);
	}
}
