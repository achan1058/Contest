#pragma once
#include "header.h"

int minBase(const string& s, bool extended = false) {
	int result = 2;
	fori(c, s) {
		if (c <= '9')
			result = max(result, c - '0' + 1);
		else if (c <= 'Z')
			result = max(result, c - 'A' + 11);
		else if (extended)
			result = max(result, c - 'a' + 37);
		else
			result = max(result, c - 'a' + 11);
	}
	return result;
}

template <class T>
T stringToInt(const string& s, int base = 10) {
	T result = 0;
	int neg = s[0] == '-';
	rep(i, neg, sz(s)) {
		result *= base;
		if (s[i] <= '9')
			result += s[i] - '0';
		else if (s[i] <= 'Z')
			result += s[i] - 'A' + 10;
		else if (base > 36)
			result += s[i] - 'a' + 36;
		else
			result += s[i] - 'a' + 10;
	}
	if (neg)
		result *= -1;
	return result;
}

// max base is 62
template <class T>
string intToString(T n, int base = 10) {
	string s;
	bool neg = false;
	if (n == T(0)) {
		return "0";
	} else if (n < T(0)) {
		neg = true;
		n *= -1;
	}
	while (n > T(0)) {
		char b = n % T(base);
		if (b < 10)
			s.pb(b + '0');
		else if (b < 36)
			s.pb(b - 10 + 'A');
		else
			s.pb(b - 36 + 'a');
		n /= base;
	}
	if (neg)
		s.pb('-');
	reverse(all(s));
	return s;
}
