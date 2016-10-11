#include <bits/stdc++.h>
#include "combinatorics.h"

int main() {
	int n;
	bool fs = true;
	while (cin >> n) {
		printf("%s%d\n", fs ? "" : "\n", binomial<int>(2 * n, n) / (n + 1));
		fs = false;
	}
}
