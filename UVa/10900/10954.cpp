#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		priority_queue<int> q;
		int u, v, ans = 0;
		rep(i, 0, n) {
			cin >> v;
			q.push(-v);
		}

		while (sz(q) > 1) {
			u = q.top();
			q.pop();
			v = q.top();
			q.pop();
			ans += u + v;
			q.push(u + v);
		}
		printv(-ans);
	}
}
