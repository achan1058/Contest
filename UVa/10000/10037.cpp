#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n;
		cin >> n;
		vi nums(n);
		read(nums);
		sort(all(nums));

		vvi ans;
		int t = 0;
		while (sz(nums) > 3) {
			if (nums[0] + 2 * nums[1] + nums[sz(nums) - 1] <= 2 * nums[0] + nums[sz(nums) - 2] + nums[sz(nums) - 1]) {
				ans.pb({ nums[0], nums[1] });
				ans.pb({ nums[0] });
				ans.pb({ nums[sz(nums) - 2], nums[sz(nums) - 1] });
				ans.pb({ nums[1] });
				t += nums[0] + 2 * nums[1] + nums[sz(nums) - 1];
				nums.resize(sz(nums) - 2);
			} else {
				ans.pb({ nums[0], nums[sz(nums) - 1] });
				ans.pb({ nums[0] });
				t += nums[0] + nums[sz(nums) - 1];
				nums.pop_back();
			}
		}

		if (sz(nums) == 1) {
			ans.pb({ nums[0] });
			t += nums[0];
		} else if (sz(nums) == 2) {
			ans.pb({ nums[0], nums[1] });
			t += nums[1];
		} else if (sz(nums) == 3) {
			ans.pb({ nums[0], nums[1] });
			ans.pb({ nums[0] });
			ans.pb({ nums[0], nums[2] });
			t += nums[0] + nums[1] + nums[2];
		}

		printX("%d\n", t);
		irep(a, ans) {
			if (sz(a) == 1)
				print(a[0]);
			else
				print(a[0], a[1]);
		}
	}
}
