#include <bits/stdc++.h>
#include "primes.h"
#include "header.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		auto m = tally(factor(n));
		int ans = 1;
		irep(t, m)
			ans *= 2 * t.second + 1;
		print(n, (ans + 1) / 2);
	}
}
