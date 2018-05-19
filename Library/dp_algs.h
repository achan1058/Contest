#pragma once
#include <bits/stdc++.h>
using namespace std;

// returns LCS that has lexicographically minimal index w.r.t. s1
template<class T>
pair<T, vector<int>>  lcs(const T& s1, const T& s2) {
	int n = s1.size(), m = s2.size();
	vector<vector<int>> table = vector<vector<int>>(n + 1, vector<int>(m + 1, 0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (s1[i] == s2[j])
				table[i + 1][j + 1] = table[i][j] + 1;
			else if (table[i + 1][j] > table[i][j + 1])
				table[i + 1][j + 1] = table[i + 1][j];
			else
				table[i + 1][j + 1] = table[i][j + 1];
		}
	}

	int len = table[n][m];
	T s(len, 0);
	vector<int> index(len);
	while (len > 0) {
		if (table[n][m] == table[n - 1][m]) {
			n--;
		} else if (table[n][m] == table[n][m - 1]) {
			m--;
		} else {
			n--;
			m--;
			len--;
			s[len] = s1[n];
			index[len] = n;
		}
	}
	return s;
}

// returns the lexicographically minimal LIS
template<class T>
pair<T, vector<int>> lis(const T& s, bool nondecrease = false) {
	if (s.size() == 0) return { T(), vector<int>() };
	vector<int> ind = { 0 };
	vector<int> prev(s.size(), -1);
	for (int i = 1; i < int(s.size()); i++) {
		int pos;
		if (nondecrease) pos = upper_bound(ind.begin(), ind.end(), i, [&](int i1, int i2) {return s[i1] < s[i2]; }) - ind.begin();
		else pos = lower_bound(ind.begin(), ind.end(), i, [&](int i1, int i2) {return s[i1] < s[i2]; }) - ind.begin();
		if (pos == ind.size()) {
			prev[i] = ind.back();
			ind.push_back(i);
		} else {
			ind[pos] = i;
			if (pos > 0)
				prev[i] = ind[pos - 1];
		}
	}
	T result(ind.size());
	vector<int> index(ind.size());
	int cur = ind.back();
	for (int i = ind.size() - 1; i >= 0; i--) {
		result[i] = s[cur];
		index[i] = cur;
		cur = prev[cur];
	}
	return { result, index };
}
