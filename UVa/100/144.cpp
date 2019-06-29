#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, k;
	while (cin >> n >> k && (n | k) != 0) {
		queue<int> q;
		vi cash(n, 40);
		rep(i, 0, n)
			q.push(i);
		int nx = 1, cur = 0;
		while (!q.empty()) {
			if (cur == 0) {
				cur = nx;
				nx = nx == k ? 1 : nx + 1;
			}
			int v = q.front();
			q.pop();
			if (cash[v] > cur) {
				cash[v] -= cur;
				cur = 0;
				q.push(v);
			} else {
				cur -= cash[v];
				printf("%3d", v + 1);
			}
		}
		print();
	}
}
