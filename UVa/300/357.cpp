#include <bits/stdc++.h>
#include "header.h"

int main() {
	vl ways(30001);
	vi coins = { 1, 5, 10, 25, 50 };
	ways[0] = 1;

	irep(c, coins) {
		rep(i, c, 30001)
			ways[i] += ways[i - c];
	}
	
	int n;
	while (cin >> n) {
		if (ways[n] == 1)
			printf("There is only 1 way to produce %d cents change.\n", n);
		else
			printf("There are %lld ways to produce %d cents change.\n", ways[n], n);
	}
}
