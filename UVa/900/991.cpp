#include <bits/stdc++.h>
#include "combinatorics.h"

int main() {
	int n;
	whileX(cin >> n)
		printX("%lld\n", binomial(2 * n, n) / (n + 1));
}
