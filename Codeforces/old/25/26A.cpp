#include <bits/stdc++.h>
#include "primes.h"

int main() {
	int n, ans = 0;
	cin >> n;
	rep(i, 2, n + 1)
		ans += sz(tally(factor(i))) == 2 ? 1 : 0;
	printf("%d\n", ans);
}
