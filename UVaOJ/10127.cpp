#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N;
	while (cin >> N) {
		int num_digits = 0, n = N;
		while (n > 0) {
			if (n % 10 == 1) {
				n /= 10;
				num_digits++;
			} else {
				n += N;
			}
		}
		printf("%d\n", num_digits);
	}
}
