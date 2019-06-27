#include <bits/stdc++.h>
#include "header.h"

int k, n, tally = 0;
vi nums, cur;
bool good;
void backtrack(int i = 0) {
	rep(j, i, n) {
		if (tally + nums[j] > k)
			continue;
		if (j > i && nums[j] == nums[j - 1])
			continue;
		tally += nums[j];
		cur.pb(nums[j]);
		if (tally == k) {
			good = true;
			rep(t, 0, sz(cur))
				printf("%d%c", cur[t], t == sz(cur) - 1 ? '\n' : '+');
		} else {
			backtrack(j + 1);
		}
		tally -= nums[j];
		cur.pop_back();
	}
}

int main() {
	while (cin >> k >> n && n != 0) {
		good = false;
		nums.resize(n);
		read(nums);
		print("Sums of %d:", k);
		backtrack();
		if (!good)
			print("NONE");
	}
}
