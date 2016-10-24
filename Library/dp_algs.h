#pragma once
#include "header.h"

// returns LCS that has lexicographically minimal index w.r.t. s1
template<class T>
T lcs(const T& s1, const T& s2) {
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
	T s(len, 0);
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

template<class T>
vi kmp_pre(const T& p) {
	int n = sz(p), start = 0;
	vi match(n);
	rep(i, 1, n) {
		while (start > 0 && p[i] != p[start])
			start = match[start - 1];
		if (p[i] == p[start])
			start++;
		match[i] = start;
	}
	return match;
}
template<class T>
vi kmp_match(const T& s, const T& p, const vi& match, bool fs = false) {
	int n = sz(p), m = sz(s), start = 0;
	vi result;
	rep(i, 0, m) {
		while (start > 0 && s[i] != p[start])
			start = match[start - 1];
		if (s[i] == p[start])
			start++;
		if (start == n) {
			result.pb(i - n + 1);
			if (fs)
				return result;
			start = match[start - 1];
		}
	}
	return result;
}
template<class T>
vi kmp(const T& s, const T& p, bool fs = false) {
	return kmp_match(s, p, kmp_pre(p), fs);
}

// returns maximum rectangle under histogram, given by the range [left, right)
template<class T>
tuple<T, int, int> largestRectangle(vector<T>& s) {
	int n = sz(s), left = 0, right = 0;
	stack<pair<int, T>> st;
	T best = 0;
	st.push({ -1, -1 });
	s.pb(0);

	rep(i, 0, n + 1) {
		int l = i;
		while (st.top().y >= s[i]) {
			l = st.top().x;
			T h = st.top().y;
			int w = i - l;
			st.pop();
			if (w * h > best) {
				best = w * h;
				left = l;
				right = i;
			}
		}
		st.push(make_pair(l, s[i]));
	}
	s.pop_back();
	return make_tuple(best, left, right);
}
