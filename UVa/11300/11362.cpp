#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n;
		cin >> n;
		vs nums(n);
		read(nums);
		sort(all(nums));
		bool good = true;
		rep(i, 0, n - 1) {
			if (sz(nums[i]) < sz(nums[i + 1]) && nums[i] == nums[i + 1].substr(0, sz(nums[i]))) {
				good = false;
				break;
			}
		}
		printf("%s\n", good ? "YES" : "NO");
	}
}
