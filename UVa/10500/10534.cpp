#include <bits/stdc++.h>
#include "header.h"

template<class T>
vi lis(const vector<T>& s) {
	if (sz(s) == 0) return vector<T>();
	vi result(sz(s)), index = { 0 };
	result[0] = 1;
	rep(i, 1, sz(s)) {
		int pos = lower_bound(all(index), i, [&](int i1, int i2) {return s[i1] < s[i2]; }) - index.begin();
		if (pos == sz(index)) {
			index.pb(i);
		} else {
			index[pos] = i;
		}
		result[i] = pos + 1;
	}
	return result;
}

int main() {
	int n;
	while (cin >> n) {
		vi seq(n);
		fori(v, seq)
			cin >> v;
		vi len = lis(seq);
		reverse(all(seq));
		vi rlen = lis(seq);
		reverse(all(rlen));

		int mx = 0;
		rep(i, 0, n)
			mx = max(mx, min(len[i], rlen[i]));

		printf("%d\n", 2 * mx - 1);
	}
}
