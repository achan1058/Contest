#pragma once
#include <bits/stdc++.h>
using namespace std;

template <class T>
vector<int> intToDigits(T n, int base = 10) {
	vector<int> ans;
	while (n > 0) {
		ans.push_back(n % base);
		n /= base;
	}
	reverse(ans.begin(), ans.end());
	return ans;
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
	int neg = s[0] == '-';
	for (int i = neg; i < s.size(); i++) {
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
