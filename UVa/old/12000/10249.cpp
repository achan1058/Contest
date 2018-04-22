#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int m, n, ans = 0, v;
		map<int, int> count;
		cin >> m >> n;
		rep(i, 0, m) {
			cin >> v;
			count[v]++;
		}
		rep(j, 0, n) {
			cin >> v;
			count[v]--;
		}
		irep(p, count)
			ans += abs(p.y);
		printf("%d\n", ans);
	}
}
