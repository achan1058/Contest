#pragma once
#include "header.h"

template<class T>
vector<T> lcs(const vector<T>& s1, const vector<T>& s2) {
	int n = sz(s1), m = sz(s2);
	vvi table = mi(n + 1, m + 1, 0);
	rep(i, 0, n) {
		rep(j, 0, m) {
			if (s1[i] == s2[j])
				table[i + 1][j + 1] = table[i][j] + 1;
			else if (table[i + 1][j] > table[i][j + 1])
				table[i + 1][j + 1] = table[i + 1][j];
			else
				table[i + 1][j + 1] = table[i][j + 1];
		}
	}

	int len = table[n][m];
	vector<T> s(len);
	while (len > 0) {
		if (table[n][m] == table[n - 1][m])
			n--;
		else if (table[n][m] == table[n][m - 1])
			m--;
		else {
			n--;
			m--;
			len--;
			s[len] = s1[n];
		}
	}
	return s;
}
