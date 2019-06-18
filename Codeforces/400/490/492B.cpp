#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, l;
	cin >> n >> l;
	vi nums(n);
	read(nums);
	sort(all(nums));
	double ans = max(nums[0], l - nums.back());
	rep(i, 1, sz(nums))
		ans = max(ans, (nums[i] - nums[i - 1]) / 2.);
	print("%.10f", ans);
}
