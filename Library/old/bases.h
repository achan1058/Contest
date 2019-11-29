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
