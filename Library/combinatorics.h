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

// test this
vector<long long> factorialTable(int n, long long m = 0) {
	vector<long long> result(n + 1);
	result[0] = 1;
	for (int i = 1; i <= n; i++) {
		result[i] = result[i - 1] * i;
		if (m != 0)
			result[i] %= m;
	}
	return result;
}

vector<vector<long long>> binomialTable(int n, long long m = 0) {
	vector<vector<long long>> result(n + 1);
	result[0] = { 1 };
	for (int i = 1; i <= n; i++) {
		result[i].resize(i + 1);
		result[i][0] = result[i][i] = 1;
		for (int j = 1; j < i; j++) {
			result[i][j] = result[i - 1][j - 1] + result[i - 1][j];
			if (m != 0)
				result[i][j] %= m;
		}
	}
	return result;
}
