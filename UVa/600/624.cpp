#include <bits/stdc++.h>
#include "header.h"

int L, n, cur, best_val;
vi len(20);
vb ans(20), best(20);
void backtrack(int d = 0) {
	if (cur > L)
		return;
	if (d == n) {
		if (cur > best_val) {
			best_val = cur;
			best = ans;
		}
		return;
	}

	ans[d] = true;
	cur += len[d];
	backtrack(d + 1);
	ans[d] = false;
	cur -= len[d];
	backtrack(d + 1);
}

int main() {
	while (cin >> L >> n) {
		rep(i, 0, n)
			cin >> len[i];

		cur = 0;
		best_val = 0;
		backtrack();
		rep(i, 0, n) {
			if (best[i])
				printf("%d ", len[i]);
		}
		printf("sum:%d\n", best_val);
	}
}
