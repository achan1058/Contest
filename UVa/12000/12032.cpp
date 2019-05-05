#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n, ans = 0;
		cin >> n;
		vi ladder(n + 1);
		rep(i, 0, n)
			cin >> ladder[i + 1];
		rrep(i, n - 1, 0) {
			if (ans == ladder[i + 1] - ladder[i])
				ans++;
			else
				ans = max(ans, ladder[i + 1] - ladder[i]);
		}
		printc("%d", ans);
	}
}
