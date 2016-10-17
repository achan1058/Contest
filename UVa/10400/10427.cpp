#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, d = 1;
	vi small(1, 0);
	vi bound(1, 0);
	for (int i = 0; bound[i] < 100000000; i++) {
		small.push_back(d);
		bound.push_back(bound[i] + 9 * d * (i + 1));
		d *= 10;
	}
	while (cin >> n) {
		int numd = 0;
		while (n > bound[numd])
			numd++;

		n -= bound[numd - 1];
		int digit = numd - (n - 1) % numd - 1;
		n = (n - 1) / numd + small[numd];
		for (; digit > 0; digit--)
			n /= 10;
		printf("%d\n", n % 10);
	}
}
