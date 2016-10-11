#include <bits/stdc++.h>
#include "combinatorics.h"

int main() {
	ll n;
	vl catalan(1, 0);
	for (ll i = 1; catalan.back() < 10000000000ll; i++)
		catalan.push_back(binomial<ll>(2 * i, i) / (i + 1));
	while (cin >> n)
		printf("%d\n", lower_bound(all(catalan), n) - catalan.begin());
}
