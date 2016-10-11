#include <bits/stdc++.h>
#include "combinatorics.h"

int main() {
	int n, k, t;
	while (cin >> n >> k) {
		int result = 1;
		rep(i, 0, k) {
			cin >> t;
			result *= binomial<int>(n, t);
			n -= t;
		}
		printf("%d\n", result);
	}
}
