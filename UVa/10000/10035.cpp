#include <bits/stdc++.h>
#include "header.h"

int main() {
	int a, b;
	while (cin >> a >> b && (a | b != 0)) {
		int carry = 0, num_carry = 0;
		rep(i, 0, 10) {
			carry += a % 10 + b % 10;
			a /= 10;
			b /= 10;
			carry /= 10;
			num_carry += carry;
		}

		if (num_carry == 0)
			printf("No carry operation.\n");
		else if (num_carry == 1)
			printf("1 carry operation.\n");
		else
			printf("%d carry operations.\n", num_carry);
	}
}
