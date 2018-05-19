#pragma once
#include <bits/stdc++.h>
using namespace std;

template <class T>
vi intToDigits(T n, int base = 10) {
	vi ans;
	while (n > T(0)) {
		ans.pb(n % T(base));
		n /= base;
	}
	reverse(all(ans));
	return ans;
}

int minBase(const string& s, bool extended = false) {
	int result = 2;
	irep(c, s) {
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
