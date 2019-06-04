#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		vi nums(n);
		read(nums);
		sort(all(nums));
		bool possible = true;
		rep(i, 1, n) {
			if (nums[i] - nums[i - 1] > 200) {
				possible = false;
				break;
			}
		}
		print("%s", possible && 1422 - nums.back() <= 100 ? "POSSIBLE" : "IMPOSSIBLE");
	}
}
