#include <bits/stdc++.h>
#include "header.h"

int main() {
	ll ans = 0;
	mod = 10000000000ll;
	rep(i, 1, 1001) {
		ll a = 1;
		rep(j, 0, i)
			a = mul(a, i);
		ans = add(a, ans);
	}
	printf("%lld\n", ans);
}
