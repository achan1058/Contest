#include <bits/stdc++.h>
#include "header.h"

int main() {
	int a1, a2;
	while (cin >> a1 >> a2 && (a1 | a2) != 0) {
		int num_carry = 0;
		int carry_bit = 0;

		while ((a1 | a2) > 0) {
			carry_bit += a1 % 10 + a2 % 10;
			a1 /= 10;
			a2 /= 10;
			carry_bit /= 10;
			if (carry_bit == 1)
				num_carry++;
		}

		if (num_carry == 0)
			printf("No carry operation.\n");
		else if (num_carry == 1)
			printf("1 carry operation.\n");
		else
			printf("%d carry operations.\n", num_carry);
	}
}
