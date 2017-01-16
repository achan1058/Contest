#include <bits/stdc++.h>
#include "combinatorics.h"

int main() {
	ll n, k;
	while (cin >> n >> k && (n | k) != 0)
		printf("%lld\n", binomial(n, k));
}
