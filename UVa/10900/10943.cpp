#include <bits/stdc++.h>
#include "combinatorics.h"
#include "header.h"

int main() {
	vvl binom = binomialTable(200, 1000000);
	int n, k;
	while (cin >> n >> k && (n | k) != 0) {
		printl(binom[n + k - 1][k - 1]);
	}
}
