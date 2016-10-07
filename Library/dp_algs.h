#pragma once
#include "header.h"

// returns LCS that has lexicographically minimal index w.r.t. s1
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

// returns the lexicographically minimal LIS
template<class T>
vector<T> lis(const vector<T>& s, bool nondecrease = false) {
	if (sz(s) == 0) return vector<T>();
	vi index(1, 0);
	vi prev(sz(s), -1);
	rep(i, 1, sz(s)) {
		int pos;
		if (nondecrease) pos = upper_bound(all(index), i, [&](int i1, int i2) {return s[i1] < s[i2]; }) - index.begin();
		else pos = lower_bound(all(index), i, [&](int i1, int i2) {return s[i1] < s[i2]; }) - index.begin();
		if (pos == sz(index)) {
			prev[i] = index.back();
			index.pb(i);
		} else {
			index[pos] = i;
			if (pos > 0)
				prev[i] = index[pos - 1];
		}
	}
	vector<T> result(sz(index));
	int cur = index.back();
	rrep(i, sz(index) - 1, 0) {
		result[i] = s[cur];
		cur = prev[cur];
	}
	return result;
}
