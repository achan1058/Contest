#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi coins = { 1, 5, 10, 25, 50 };
	vl num(32000, 0);
	num[0] = 1;
	drep(i, j, 5, 30000)
		num[j + coins[i]] += num[j];

	int n;
	while (cin >> n) {
		if (num[n] == 1)
			printf("There is only 1 way to produce %d cents change.\n", n);
		else
			printf("There are %lld ways to produce %d cents change.\n", num[n], n);
	}
}
