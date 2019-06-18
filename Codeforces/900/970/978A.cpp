#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	cin >> n;
	vi nums(n), ans;
	read(nums);
	set<int> used;
	rrep(i, n - 1, 0) {
		if (used.find(nums[i]) != used.end())
			continue;
		ans.pb(nums[i]);
		used.insert(nums[i]);
	}
	reverse(all(ans));
	print(sz(ans));
	print(ans);
}
