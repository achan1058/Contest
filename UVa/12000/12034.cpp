#include <bits/stdc++.h>
#include "combinatorics.h"

int main() {
	mod = 10056;
	int n;
	vl ans(1001);
	vvl pas = binomialTable(1000, 10056);
	ans[0] = ans[1] = 1;
	rep(i, 2, 1001) {
		rep(j, 0, i)
			ans[i] = add(ans[i], mul(pas[i][i - j], ans[j]));
	}
	forX() {
		cin >> n;
		printc("%lld\n", ans[n]);
	}
}
