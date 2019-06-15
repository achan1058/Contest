#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, v, ans = 0;
	map<int, int> nums;
	cin >> n;
	rep(i, 0, n) {
		cin >> v;
		nums[v]++;
		ans = max(ans, nums[v]);
	}
	print(ans);
}
