#include <bits/stdc++.h>
#include "header.h"

int main() {
	vvi digits = mi(10001, 10, 0);
	rep(n, 1, 10001) {
		rep(j, 0, 10)
			digits[n][j] = digits[n - 1][j];
		irep(c, to_string(n))
			digits[n][c - '0']++;
	}
	forX() {
		int n;
		cin >> n;
		rep(j, 0, 9)
			printf("%d ", digits[n][j]);
		print("%d", digits[n][9]);
	}
}
