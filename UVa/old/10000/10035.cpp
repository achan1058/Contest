#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n1, n2;
	while (cin >> n1 >> n2 && (n1 | n2) != 0) {
		int ans = 0, carry = 0;
		while ((n1 | n2 | carry) != 0) {
			carry += n1 % 10 + n2 % 10;
			if (carry >= 10)
				ans++;
			n1 /= 10;
			n2 /= 10;
			carry /= 10;
		}
		if (ans == 0)
			printf("No carry operation.\n");
		else if (ans == 1)
			printf("1 carry operation.\n");
		else
			printf("%d carry operations.\n", ans);
	}
}
