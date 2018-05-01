#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, v;
	while (cin >> n) {
		int ans = 0;
		rep(i, 0, 5) {
			cin >> v;
			ans += v == n ? 1 : 0;
		}
		print("%d", ans);
	}
}
