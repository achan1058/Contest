#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n) {
		vi nums(n);
		read(nums);
		sort(all(nums));
		int t1 = nums[(n - 1) / 2], t2 = nums[n / 2];
		int ans = 0;
		rep(i, 0, n)
			ans += nums[i] == t1 || nums[i] == t2 ? 1 : 0;
		print(t1, ans, t2 - t1 + 1);
	}
}
