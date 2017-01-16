#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	char c;
	forX() {
		cin >> n;
		int ans = 0, total = 0;
		rep(i, 0, n + 1) {
			cin >> c;
			total += c - '0';
			ans = max(i - total + 1, ans);
		}
		printp("%d\n", ans);
	}
}
