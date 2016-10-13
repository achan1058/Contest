#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi nums;
	int v;
	while (cin >> v) {
		if (v == 0) {
			if (sz(nums) == 0)
				return 0;
			else {
				int g = nums[1] - nums[0];
				rep(i, 2, sz(nums))
					g = gcd(g, nums[i] - nums[i - 1]);

				printf("%d\n", g);
				nums.clear();
			}
		} else {
			nums.pb(v);
		}
	}
}
