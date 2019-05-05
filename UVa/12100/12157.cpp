#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n, t, ttl = 0, m = 0, j = 0;
		cin >> n;
		rep(i, 0, n) {
			cin >> t;
			m += t / 30 * 10 + 10;
			j += t / 60 * 15 + 15;
		}
		printc("%s%s%d", m <= j ? "Mile " : "", m >= j ? "Juice " : "", min(m, j));
	}
}
