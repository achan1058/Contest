#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		ll n, ans = 0;
		cin >> n;
		n -= 180000;
		if (n > 0) {
			ans += n * 2;
			n -= 300000;
		}
		if (n > 0) {
			ans += n;
			n -= 400000;
		}
		if (n > 0) {
			ans += n;
			n -= 300000;
		}
		if (n > 0)
			ans += n;
		ans = (ans + 19) / 20;
		if (ans > 0)
			ans = max(ans, 2000ll);
		printc("%lld", ans);
	}
}
