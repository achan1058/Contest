#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N, c;
	while (cin >> N && N != 0) {
		priority_queue<int> q;
		int result = 0;
		rep(i, 0, N) {
			cin >> c;
			q.push(-c);
		}
		while (sz(q) > 1) {
			int u = q.top();
			q.pop();
			int v = q.top();
			q.pop();
			q.push(u + v);
			result += u + v;
		}
		printf("%d\n", -result);
	}
}
