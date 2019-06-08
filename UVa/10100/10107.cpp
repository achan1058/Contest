#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	vi nums;
	while (cin >> n) {
		nums.pb(n);
		sort(all(nums));
		int d = sz(nums) / 2;
		print(sz(nums) % 2 ? nums[d] : (nums[d - 1] + nums[d]) / 2);
	}
}
