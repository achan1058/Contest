#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n, best, v, diff = -inf;
		cin >> n >> best;
		rep(i, 1, n) {
			cin >> v;
			diff = max(diff, best - v);
			best = max(best, v);
		}
		printf("%d\n", diff);
	}
}
