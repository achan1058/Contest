#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	while (cin >> s && s != "0") {
		int sum = 0, sign = 1;
		irep(c, s) {
			sum += (c - '0') * sign;
			sign *= -1;
		}
		printf("%s is %sa multiple of 11.\n", s.c_str(), sum % 11 == 0 ? "" : "not ");
	}
}
