#include <bits/stdc++.h>
#include "header.h"

int main() {
	int p, n, v;
	while (cin >> p && p != 0) {
		int ans = 0;
		cin >> n;
		rep(i, 0, n) {
			cin >> v;
			ans += max(p - v, 0);
			p = v;
		}
		print(ans);
	}
}
