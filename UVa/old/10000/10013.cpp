#include <bits/stdc++.h>
#include "header.h"

int main() {
	int M, a, b;
	forX() {
		printX("");
		cin >> M;
		vi digits(M);
		irep(d, digits) {
			cin >> a >> b;
			d = a + b;
		}
		rrep(i, M - 1, 0) {
			if (digits[i] >= 10) {
				digits[i] -= 10;
				digits[i - 1]++;
			}
		}
		irep(d, digits)
			printf("%d", d);
		printf("\n");
	}
}
