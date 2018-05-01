#pragma once
#include <bits/stdc++.h>
using namespace std;

long long binom(int n, int r) {
	long long result = 1;
	if (r > n / 2)
		r = n - r;
	if (r < 0)
		return 0;
	for (int i = 0; i < r; i++) {
		result *= n - i;
		result /= i + 1;
	}
	return result;
}
