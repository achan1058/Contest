#include <bits/stdc++.h>
#include "header.h"

template<class T>
T numRectangles(vector<T>& s) {
	int n = s.size(), left = 0, right = 0;
	stack<pair<int, T>> st;
	T total = 0;
	st.push({ -1, -1 });
	s.pb(0);
	rep(i, 0, n + 1) {
		int l = i;
		while (st.top().y >= s[i]) {
			l = st.top().x;
			T h = st.top().y;
			int w = i - l;
			st.pop();
			total += (h - max(s[i], st.top().y)) * w * (w + 1) / 2;
		}
		st.push(make_pair(l, s[i]));
	}
	s.pop_back();
	return total;
}

int main() {
	int n, m;
	while (cin >> n >> m && n != 0 && m != 0) {
		vvi arr = mi(n, m, 0);
		char c;
		rep(i, 0, n) {
			rep(j, 0, m) {
				cin >> c;
				if (c == '1')
					arr[i][j] = 1 + (i > 0 ? arr[i - 1][j] : 0);
				else
					arr[i][j] = 0;
			}
		}
		int total = 0;
		rep(i, 0, n)
			total += numRectangles(arr[i]);
		printf("%d\n", total);
	}
}
