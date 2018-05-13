#include <bits/stdc++.h>
#include "combinatorics.h"

int main() {
	int n;
	cin >> n;
	printf("%lld", binom(2 * n - 2, n - 1));
}
