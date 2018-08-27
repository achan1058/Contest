#pragma once
#include <bits/stdc++.h>
using namespace std;

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
