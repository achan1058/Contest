#include <bits/stdc++.h>
#include "header.h"

int main() {
	int bestn = 0, bestd = 1;
	rep(d, 2, 1000001) {
		if (d % 7 == 0)
			continue;

		int n = 3 * d / 7;

		if (n * bestd > d * bestn) {
			bestn = n;
			bestd = d;
		}
	}

	printf("%d\n", bestn);
}
