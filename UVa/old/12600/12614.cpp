#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n, v, ans = 0;
		cin >> n;
		rep(i, 0, n) {
			cin >> v;
			ans = max(ans, v);
		}
		printf("Case %d: %d\n", X, ans);
	}
}
