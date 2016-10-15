#include <bits/stdc++.h>
#include "header.h"

vi coins = { 5, 10, 20, 50, 100, 200, 500, 1000, 2000, 5000, 10000 };
int main() {
	double change;
	vl num_ways(10000, 0);
	num_ways[0] = 1;

	fori(c, coins) {
		c /= 5;
		rep(i, 0, 6001)
			num_ways[i + c] += num_ways[i];
	}

	while (cin >> change && change > eps)
		printf("%6.2f%17lld\n", change, num_ways[int(20 * change + eps)]);
}
