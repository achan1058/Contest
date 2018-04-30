#pragma once
#include <bits/stdc++.h>
using namespace std;

// returns LCS that has lexicographically minimal index w.r.t. s1
template<class T>
T lcs(const T& s1, const T& s2) {
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
		}
	}
	return s;
}
