#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, t = 0, cur = 0, best = 0, v;
	cin >> n;
	rep(i, 0, n) {
		cin >> v;
		t += v;
		cur += v == 0 ? 1 : -1;
		cur = max(cur, 0);
		best = max(best, cur);
	}
	print(t == n ? t - 1 : t + best);
}
