#include <bits/stdc++.h>
#include "header.h"

void pancake(vi& nums, int n) {
	int best = 0;
	rep(i, 1, n) {
		if (nums[i] > nums[best])
			best = i;
	}
	if (best == n - 1)
		return;
	if (best != 0) {
		reverse(nums.begin(), nums.begin() + best + 1);
		printf("%d ", sz(nums) - best);
	}
	reverse(nums.begin(), nums.begin() + n);
	printf("%d ", sz(nums) - n + 1);
}

int main() {
	string s;
	while (getline(cin, s)) {
		printv(s);
		stringstream ss(s);
		vi nums;
		int t;
		while (ss >> t)
			nums.pb(t);
		rrep(i, sz(nums), 2)
			pancake(nums, i);
		print("0");
	}
}
