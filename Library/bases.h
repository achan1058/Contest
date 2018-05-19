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
