#include <bits/stdc++.h>
#include "header.h"

int main() {
	int l, n, a;
	forX() {
		int mint = 0, maxt = 0;
		cin >> l >> n;
		rep(i, 0, n) {
			cin >> a;
			mint = max(mint, min(a, l - a));
			maxt = max(maxt, max(a, l - a));
		}
		printf("%d %d\n", mint, maxt);
	}
}
