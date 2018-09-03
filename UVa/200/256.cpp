#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	vvi ans(4);
	vi nums = { 10, 100, 1000, 10000 };

	rep(k, 0, 4) {
		drep(i, j, nums[k], nums[k]) {
			if (i * nums[k] + j == (i + j) * (i + j))
				ans[k].pb(i * nums[k] + j);
		}
	}

	while (cin >> n) {
		irep(v, ans[n / 2 - 1]) {
			string s = "%0" + to_string(n) + "d";
			print(s.c_str(), v);
		}
	}
}
