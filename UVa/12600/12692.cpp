#include <bits/stdc++.h>
#include "sorting.h"
#include "header.h"

int min_pos(int k, int pos, int label) {
	int mn = k * label, mx = k * (label + 1) - 1;
	if (pos < mn)
		return mn - pos;
	if (pos > mx)
		return pos - mx;
	return 0;
}

int main() {
	forX() {
		int n, k, t, ans2 = 0;
		cin >> n >> k;
		vi nums(n);
		rep(i, 0, n) {
			cin >> t;
			nums[i] = (t - 1) / k;
			ans2 = max(ans2, min_pos(k, i, nums[i]));
		}
		ll ans1 = inversionCount(nums, 0, sz(nums));
		printc("%lld", ans1 - ans2);
	}
}
