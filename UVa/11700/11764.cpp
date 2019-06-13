#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n, high = 0, low = 0;
		cin >> n;
		vi nums(n);
		read(nums);
		rep(i, 1, n) {
			if (nums[i] - nums[i - 1] > 0)
				high++;
			else if (nums[i] - nums[i - 1] < 0)
				low++;
		}
		printc(high, low);
	}
}
