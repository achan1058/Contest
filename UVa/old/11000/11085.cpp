#include <bits/stdc++.h>
#include "header.h"

vvi solutions;
vi ans(8);
void backtrack(int d = 0) {
	for (int i = 0; i < d - 1; i++) {
		if (ans[d - 1] == ans[i] || abs(ans[d - 1] - ans[i]) == d - i - 1)
			return;
	}
	if (d == 8) {
		solutions.push_back(ans);
		return;
	}
	rep(k, 0, 8) {
		if (true) {
			ans[d] = k;
			backtrack(d + 1);
		}
	}
}

int main() {
	vi test(8);
	backtrack();
	whileX((read(test), cin)) {
		int best = 0;
		for (auto& v : solutions) {
			int same = 0;
			for (int i = 0; i < 8; i++) {
				if (v[i] == test[i] - 1)
					same++;
			}
			best = max(same, best);
		}

		printc("%d\n", 8 - best);
	}
}