#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		vi cents(n);
		char t;
		int c, d, total = 0, diff = 0;
		rep(i, 0, n) {
			cin >> d >> t >> c;
			cents[i] = 100 * d + c;
			total += cents[i];
		}

		sort(all(cents));
		int avg = total / n, less = n - total % n;
		rep(i, 0, n)
			diff += max(avg + (i < less ? 0 : 1) - cents[i], 0);
		print("$%d.%02d", diff / 100, diff % 100);
	}
}
