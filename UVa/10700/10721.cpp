#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, k, m;
	while (cin >> n >> k >> m) {
		vl nums(n + m);
		nums[0] = 1;
		rep(i, 0, k) {
			vl nums2(n + m);
			drep(j, l, n, m)
				nums2[j + l + 1] += nums[j];
			nums = nums2;
		}
		printl(nums[n]);
	}
}
