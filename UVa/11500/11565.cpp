#include <bits/stdc++.h>
#include "header.h"

int main() {
	int a, b, c;
	forX() {
		vi factors;
		cin >> a >> b >> c;
		for (int i = 1; i <= b; i++) {
			if (b % i == 0) {
				factors.push_back(i);
				factors.push_back(-i);
			}
		}
		sort(all(factors));
		for (int x : factors) {
			for (int y : factors) {
				int z = b / x / y;
				if (x == y || x == z || y == z)
					continue;
				if (x + y + z != a)
					continue;
				if (x * y * z != b)
					continue;
				if (x * x + y * y + z * z != c)
					continue;
				printf("%d %d %d\n", x, y, z);
				goto end;
			}
		}
		printf("No solution.\n");
	end:;
	}
}
