#include <bits/stdc++.h>
#include "header.h"

bool distinct(int n) {
	vb digits(10);
	while (n > 0) {
		if (digits[n % 10])
			return false;
		digits[n % 10] = true;
		n /= 10;
	}
	return true;
}

int main() {
	int n;
	cin >> n;
	n++;
	while (!distinct(n))
		n++;
	print(n);
}
