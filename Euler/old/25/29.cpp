#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi base(101), pow(101);
	set<pii> ans;

	rep(i, 2, 101) {
		if (base[i] == 0) {
			for (int j = i, p = 1; j <= 100; j *= i, p++) {
				base[j] = i;
				pow[j] = p;
			}
		}
	}

	rep(a, 2, 101) {
		rep(b, 2, 101)
			ans.insert({ base[a], pow[a] * b });
	}
	printf("%d\n", sz(ans));
}
