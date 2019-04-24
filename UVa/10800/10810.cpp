#include <bits/stdc++.h>
#include "header.h"

ll merge(vi& nums, int l, int r) {
	if (r - l <= 1)
		return 0;
	int m = (l + r) / 2;
	ll ans = merge(nums, l, m) + merge(nums, m, r);
	int i1 = l, i2 = m;
	vi arr;
	while (i1 < m && i2 < r) {
		if (nums[i1] <= nums[i2]) {
			arr.pb(nums[i1]);
			i1++;
		} else {
			arr.pb(nums[i2]);
			i2++;
			ans += m - i1;
		}
	}
	while (i1 < m) {
		arr.pb(nums[i1]);
		i1++;
	}
	while (i2 < r) {
		arr.pb(nums[i2]);
		i2++;
	}
	rep(i, 0, r - l)
		nums[l + i] = arr[i];
	return ans;
}

int main() {
	int n;
	while (cin >> n && n != 0) {
		vi nums(n);
		read(nums);
		print("%lld", merge(nums, 0, n));
	}
}
