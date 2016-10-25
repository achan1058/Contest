#include <bits/stdc++.h>
#include "combinatorics.h"

int main() {
	int n, t, p;
	forX() {
		cin >> n >> t >> p;
		printf("%lld\n", binomial(t - n * p + n - 1, n - 1));
	}
}
