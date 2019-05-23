#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n, m, v, count = 0;
		unordered_map<int, int> t1, t2;
		cin >> n >> m;
		rep(i, 0, n) {
			cin >> v;
			t1[v]++;
		}
		rep(i, 0, m) {
			cin >> v;
			t2[v]++;
		}
		irep(p, t1)
			count += min(p.second, t2[p.first]);
		print("%d", n + m - 2 * count);
	}
}
