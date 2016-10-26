#include <bits/stdc++.h>
#include "header.h"

int n, sum, t;
bool has_sum;
vb ans;
vi v;
void backtrack(int d = 0) {
	if (sum == t) {
		bool fs = true;
		rep(i, 0, d) {
			if (ans[i]) {
				printf("%s%d", fs ? "" : "+", v[i]);
				fs = false;
			}
		}
		printf("\n");
		has_sum = true;
		return;
	} else if (d == n) {
		return;
	}
	if ((d == 0 || v[d - 1] != v[d] || ans[d - 1]) && sum + v[d] <= t) {
		ans[d] = true;
		sum += v[d];
		backtrack(d + 1);
		sum -= v[d];
		ans[d] = false;
	}
	backtrack(d + 1);
}

int main() {
	while (cin >> t >> n && n != 0) {
		has_sum = false;
		v = vi(n);
		ans = vb(n);
		read(v);
		printf("Sums of %d:\n", t);
		backtrack();
		if (!has_sum)
			printf("NONE\n");
	}
}
