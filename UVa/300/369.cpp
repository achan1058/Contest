#include <bits/stdc++.h>
#include "combinatorics.h"

int main() {
	int n, k;
	while (cin >> n >> k && (n | k) != 0)
		printf("%lld things taken %lld at a time is %lld exactly.\n", n, k, binomial(n, k));
}
