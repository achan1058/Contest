#include <bits/stdc++.h>
#include "header.h"

int main() {
	int a, b;
	while (cin >> a >> b && (a | b) != 0) {
		int carry = 0, num_carry = 0;
		rep(i, 0, 10) {
			carry += a % 10 + b % 10;
			a /= 10;
			b /= 10;
			carry /= 10;
			num_carry += carry;
		}

		if (num_carry == 0)
			print("No carry operation.");
		else if (num_carry == 1)
			print("1 carry operation.");
		else
			print("%d carry operations.", num_carry);
	}
}
