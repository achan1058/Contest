#include <bits/stdc++.h>
#include "header.h"

vi digits = { 1, 10, 100, 1000, 10000 };
vi find_quirky(int n) {
	vi result;
	rep(i, 0, digits[n]) {
		rep(j, 0, digits[n]) {
			if (i * digits[n] + j == (i + j) * (i + j))
				result.pb(i * digits[n] + j);
		}
	}
	return result;
}

int main() {
	vvi result(5);
	int n;
	rep(i, 1, 5)
		result[i] = find_quirky(i);
	while (cin >> n) {
		fori(r, result[n / 2]) {
			if (n == 2)
				printf("%02d\n", r);
			else if (n == 4)
				printf("%04d\n", r);
			else if (n == 6)
				printf("%06d\n", r);
			else if (n == 8)
				printf("%08d\n", r);
		}
	}
}
