#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n, a, b;
		cin >> n;
		vi digits(n);
		irep(v, digits) {
			cin >> a >> b;
			v = a + b;
		}
		rrep(i, sz(digits) - 1, 1) {
			if (digits[i] >= 10) {
				digits[i] -= 10;
				digits[i - 1]++;
			}
		}
		printX("");
		irep(v, digits)
			printf("%c", v + '0');
		print();
	}
}
