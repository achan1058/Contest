#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n, ans = 1;
		cin >> n;
		vi nums(n);
		read(nums);
		sort(all(nums), [](int i, int j) { return abs(i) < abs(j); });
		rep(i, 1, n)
			ans += (nums[i - 1] > 0) != (nums[i] > 0) ? 1 : 0;
		print(ans);
	}
}
