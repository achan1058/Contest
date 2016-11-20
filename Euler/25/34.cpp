#include <bits/stdc++.h>
#include "combinatorics.h"

int main() {
	vi fact_table = factTable<int>(9);
	int total = 0;

	rep(i, 10, 1000000) {
		int rem = i, sum = 0;
		while (rem > 0) {
			sum += fact_table[rem % 10];
			rem /= 10;
		}

		if (sum == i)
			total += sum;
	}

	printf("%d\n", total);
}
