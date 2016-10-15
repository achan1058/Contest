#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi num_change(10000);
	vi coins = { 50, 25, 10, 5, 1 };
	int n;
	num_change[0] = 1;
	fori(c, coins) {
		rep(j, 0, 7489)
			num_change[j + c] += num_change[j];
	}
	while (cin >> n)
		printf("%d\n", num_change[n]);
}
