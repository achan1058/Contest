#include <bits/stdc++.h>
#include "header.h"

int sum(int n) {
	int result = 0;
	while (n > 0) {
		result += n % 10;
		n /= 10;
	}
	return result;
}

int main() {
	string s;
	while (cin >> s && s != "0") {
		int sum_digit = 0;

		fori(c, s)
			sum_digit += c - '0';
		if (sum_digit % 9 != 0) {
			printf("%s is not a multiple of 9.\n", s.c_str());
			continue;
		}

		int iter = 1;

		while (sum_digit > 9) {
			sum_digit = sum(sum_digit);
			iter++;
		}
		printf("%s is a multiple of 9 and has 9-degree %d.\n", s.c_str(), iter);
	}
}
