#include <bits/stdc++.h>
#include "header.h"

int main() {
	int num, dem;
	while (cin >> num >> dem) {
		vi frac;
		int g = gcd(num, dem);
		num /= g;
		dem /= g;
		printf("[%d;", num / dem);
		num %= dem;

		while (num != 1) {
			swap(num, dem);
			printf("%d,", num / dem);
			num %= dem;
		}
		printf("%d]\n", dem);
	}
}
