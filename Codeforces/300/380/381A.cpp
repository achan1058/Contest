#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, v;
	cin >> n;
	vi ans(2);
	deque<int> q;
	rep(i, 0, n) {
		cin >> v;
		q.pb(v);
	}
	rep(i, 0, n) {
		if (q.front() > q.back()) {
			ans[i % 2] += q.front();
			q.pop_front();
		} else {
			ans[i % 2] += q.back();
			q.pop_back();
		}
	}
	print(ans);
}
