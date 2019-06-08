#include <bits/stdc++.h>
#include "combinatorics.h"
#include "header.h"

int main() {
	unordered_map<int, int> ans;
	rep(i, 1, 10000) {
		int s = binom(i + 2, 2);
		ans[s] = i;
		if (s > 50000000)
			break;
	}

	forX() {
		int n;
		cin >> n;
		if (ans[n] == 0)
			print("No solution");
		else
			printv(ans[n]);
	}
}
