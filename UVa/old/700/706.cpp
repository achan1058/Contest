#include <bits/stdc++.h>
#include "header.h"

void print_digit(int n, int d, int x, vs& output) {
	if (d == 0 || d == 2 || d == 3 || d >= 5) {
		rep(i, 0, n)
			output[0][x + i + 1] = '-';
	}
	if (d == 0 || d == 4 || d == 5 || d == 6 || d >= 8) {
		rep(i, 0, n)
			output[i + 1][x] = '|';
	}
	if (d == 2 || d == 0 || d == 6 || d == 8) {
		rep(i, 0, n)
			output[n + i + 2][x] = '|';
	}
	if (d <= 4 || d >= 7) {
		rep(i, 0, n)
			output[i + 1][x + n + 1] = '|';
	}
	if (d != 2) {
		rep(i, 0, n)
			output[n + i + 2][x + n + 1] = '|';
	}
	if (d == 2 || d == 3 || d == 4 || d == 5 || d == 6 || d == 8 || d == 9) {
		rep(i, 0, n)
			output[n + 1][x + i + 1] = '-';
	}
	if (d == 2 || d == 3 || d == 0 || d == 5 || d == 6 || d == 8 || d == 9) {
		rep(i, 0, n)
			output[2 * n + 2][x + i + 1] = '-';
	}
}

int main() {
	int n;
	string s;
	while (cin >> n >> s && (n != 0 || s != "0")) {
		vs output = vs(2 * n + 3, string(sz(s) * (n + 3) - 1, ' '));
		rep(i, 0, sz(s))
			print_digit(n, s[i] - '0', i * (n + 3), output);
		irep(str, output)
			printf("%s\n", str.c_str());

		printf("\n");
	}
}
