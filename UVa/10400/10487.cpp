#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	whileX(cin >> n && n != 0) {
		vi nums(n);
		read(nums);
		sort(all(nums));
		print("Case %d:", X);

		int m, v;
		cin >> m;
		rep(i, 0, m) {
			cin >> v;
			int mn = 0, mx = n - 1, target = nums[mx] + nums[mn], best = target, diff = abs(target - v);
			while (mx > mn) {
				target = nums[mx] + nums[mn];
				if (abs(target - v) < diff) {
					diff = abs(target - v);
					best = target;
				}
				if (target < v)
					mn++;
				else
					mx--;
			}
			print("Closest sum to %d is %d.", v, best);
		}
	}
}
