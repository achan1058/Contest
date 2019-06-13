#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n, best = 0, t;
		cin >> n;
		rep(i, 0, n) {
			cin >> t;
			best = max(best, t);
		}
		printc(best);
	}
}
