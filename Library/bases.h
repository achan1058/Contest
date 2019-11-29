#pragma once
#include <bits/stdc++.h>
using namespace std;

// max base is 62
template <class T>
string to_string(T n, int base) {
	string s;
	bool neg = false;
	if (n == 0) {
		return "0";
	} else if (n < 0) {
		neg = true;
		n *= -1;
	}
	while (n > 0) {
		char b = n % base;
		if (b < 10)
			s.push_back(b + '0');
		else if (b < 36)
			s.push_back(b - 10 + 'A');
		else
			s.push_back(b - 36 + 'a');
		n /= base;
	}
	if (neg)
		s.push_back('-');
	reverse(s.begin(), s.end());
	return s;
}

int minBase(const string& s, bool extended = false) {
	int result = 2;
	for (auto c : s) {
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
	for (auto c : s) {
		if (c < '0')
			continue;
		result *= base;
		if (c <= '9')
			result += c - '0';
		else if (c <= 'Z')
			result += c - 'A' + 10;
		else if (base > 36)
			result += c - 'a' + 36;
		else
			result += c - 'a' + 10;
	}
	return s[0] == '-' ? -result : result;
}
