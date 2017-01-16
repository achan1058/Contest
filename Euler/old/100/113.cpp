#include <bits/stdc++.h>
#include "combinatorics.h"

int main() {
	ll digits = 100, ans = 0;
	rep(i, 1, digits + 1)
		ans += binomial<ll>(i + 9, 9) + binomial<ll>(i + 8, 8) - 10;
	printf("%lld\n", ans);
}
