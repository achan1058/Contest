#include <bits/stdc++.h>
#include "combinatorics.h"

int main() {
	int n, k;
	vvi table = binomialTable<int>(200, 1000000);
	while (cin >> n >> k && (n | k) != 0)
		printf("%d\n", table[n + k - 1][k - 1]);
}
