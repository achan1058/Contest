#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n) {
		int sum = int(sqrt(2 * n));
		while (sum * (sum + 1) / 2 < n)
			sum++;

		int rem = n - sum * (sum - 1) / 2;
		if (sum % 2 == 0)
			printf("TERM %d IS %d/%d\n", n, rem, sum - rem + 1);
		else
			printf("TERM %d IS %d/%d\n", n, sum - rem + 1, rem);
	}
}
