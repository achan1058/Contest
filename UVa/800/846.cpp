#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		ll l, r;
		cin >> l >> r;
		ll d = r - l, d2 = d / 2;
		ll t = (sqrt(8 * d2 + 1) - 1) / 2;
		ll ans = 2 * t;
		if (d - t * (t + 1) > t + 1)
			ans += 2;
		else if (d - t * (t + 1) > 0)
			ans++;
		print("%lld", ans);
	}
}
