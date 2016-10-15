#include <bits/stdc++.h>
#include "header.h"

bool leapYear(const string& s) {
	int t = sz(s);
	int n = 1000 * (s[t - 4] - '0') + 100 * (s[t - 3] - '0') + 10 * (s[t - 2] - '0') + (s[t - 1] - '0');
	if (n % 400 == 0)
		return true;
	if (n % 100 == 0)
		return false;
	if (n % 4 == 0)
		return true;
	return false;
}

bool div3(const string& s) {
	int r = 0;
	irep(c, s)
		r += c - '0';
	return r % 3 == 0;
}

bool div5(const string& s) {
	return s.back() == '0' || s.back() == '5';
}

bool div11(const string& s) {
	int r = 0, sign = 1;
	irep(c, s) {
		r += (c - '0') * sign;
		sign *= -1;
	}
	return r % 11 == 0;
}

int main() {
	string s;
	int X = 1;
	while (cin >> s) {
		printf("%s", X > 1 ? "\n" : "");
		if (leapYear(s))
			printf("This is leap year.\n");
		if (div3(s) && div5(s))
			printf("This is huluculu festival year.\n");
		if (leapYear(s) && div5(s) && div11(s))
			printf("This is bulukulu festival year.\n");
		if (!leapYear(s) && !(div3(s) && div5(s)))
			printf("This is an ordinary year.\n");
		X++;
	}
}
