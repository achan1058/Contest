#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n, v, ans = 0;
		queue<int> q;
		unordered_set<int> s;
		cin >> n;
		rep(i, 0, n) {
			cin >> v;
			while (s.find(v) != s.end()) {
				int t = q.front();
				q.pop();
				s.erase(t);
			}
			q.push(v);
			s.insert(v);
			ans = max(ans, sz(q));
		}
		printv(ans);
	}
}
