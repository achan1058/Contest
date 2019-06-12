#include <bits/stdc++.h>
#include "header.h"

bool comp(const tuple<int, int, int>& a, const tuple<int, int, int>& b) {
	int p1 = get<0>(a) * get<1>(b), p2 = get<0>(b) * get<1>(a);
	if (p1 < p2)
		return true;
	else if (p1 > p2)
		return false;
	return get<2>(a) < get<2>(b);
}

int main() {
	forX() {
		int n, t, s;
		cin >> n;
		vector<tuple<int, int, int>> ans;
		rep(i, 0, n) {
			cin >> t >> s;
			ans.pb({ t, s, i + 1 });
		}

		sort(all(ans), comp);
		printX();
		rep(i, 0, n)
			printf("%d%c", get<2>(ans[i]), i == n - 1 ? '\n' : ' ');
	}
}
