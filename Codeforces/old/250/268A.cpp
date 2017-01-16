#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, ans = 0;
	cin >> n;
	vector<pii> p(n);
	rep(i, 0, n) {
		cin >> p[i].x >> p[i].y;
		rep(j, 0, i) {
			ans += (p[i].x == p[j].y ? 1 : 0);
			ans += (p[j].x == p[i].y ? 1 : 0);
		}
	}
	printf("%d\n", ans);
}
