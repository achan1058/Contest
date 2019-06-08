#include <bits/stdc++.h>
#include "header.h"

int find(const vi& num, int cur, int k) {
	int n = sz(num);
	rep(i, 0, k) {
		cur = (cur + 1) % n;
		while (num[cur] == -1)
			cur = (cur + 1) % n;
	}
	return cur;
}

int main() {
	int n, k;
	while (cin >> n >> k && (n | k) != 0) {
		vi num(n);
		rep(i, 0, n)
			num[i] = i;

		int cur = -1;
		cur = find(num, cur, k - 1);
		rep(i, 0, n - 1) {
			cur = find(num, cur, 1);
			num[cur] = -1;
			int v = find(num, cur, k);
			swap(num[cur], num[v]);
			cur = v;
		}
		cur = find(num, cur, 1);
		print((n - num[cur]) % n + 1);
	}
}
