#include <bits/stdc++.h>
#include "header.h"

int main() {
	ll n = 2, k = 1, printed = 0;

	while (printed < 10) {
		if (2 * n * n == k * k + k) {
			printf("%10lld%10lld\n", n, k);
			printed++;
			n++;
		} else if (2 * n * n > k * k + k) {
			k++;
		} else {
			n++;
		}
	}
}
