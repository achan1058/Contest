#pragma once
#include <bits/stdc++.h>
using namespace std;

// returns LCS that has lexicographically minimal index w.r.t. s1
inline string lcsHelper(const string& s, int len) { return string(len, 0); }
template<class T> inline vector<T> lcsHelper(const vector<T>&, int len) { return vector<T>(len); }
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
	T s = lcsHelper(s1, len);
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

/*
// returns the lexicographically minimal LIS
template<class T>
T lis(const T& s, bool nondecrease = false) {
	if (sz(s) == 0) return T();
	vi index = { 0 };
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
	T result(sz(index));
	int cur = index.back();
	rrep(i, sz(index) - 1, 0) {
		result[i] = s[cur];
		cur = prev[cur];
	}
	return result;
}
*/
template<class T>
vector<int> kmp_pre(const T& p) {
	int n = p.size(), start = 0;
	vector<int> match(n);
	for (int i = 1; i < n; i++) {
		while (start > 0 && p[i] != p[start])
			start = match[start - 1];
		if (p[i] == p[start])
			start++;
		match[i] = start;
	}
	return match;
}
template<class T>
vector<int> kmp_match(const T& s, const T& p, const vector<int>& match, bool fs = false) {
	int n = p.size(), m = s.size(), start = 0;
	vector<int> result;
	for (int i = 0; i < m; i++) {
		while (start > 0 && s[i] != p[start])
			start = match[start - 1];
		if (s[i] == p[start])
			start++;
		if (start == n) {
			result.push_back(i - n + 1);
			if (fs)
				return result;
			start = match[start - 1];
		}
	}
	return result;
}
template<class T>
vector<int> kmp(const T& s, const T& p, bool fs = false) {
	return kmp_match(s, p, kmp_pre(p), fs);
}

// returns maximum rectangle under histogram, given by the range [left, right)
template<class T>
tuple<T, int, int> largestRectangle(vector<T>& s) {
	int n = s.size(), left = 0, right = 0;
	stack<pair<int, T>> st;
	T best = 0;
	st.push({ -1, -1 });
	s.push_back(0);

	for (int i = 0; i <= n; i++) {
		int l = i;
		while (st.top().second >= s[i]) {
			l = st.top().first;
			T h = st.top().second;
			int w = i - l;
			st.pop();
			if (w * h > best) {
				best = w * h;
				left = l;
				right = i;
			}
		}
		st.push({ l, s[i] });
	}
	s.pop_back();
	return{ best, left, right };
}
