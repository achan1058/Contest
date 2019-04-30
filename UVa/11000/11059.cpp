#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	whileX(cin >> n) {
		ll best = 0;
		vl nums(n);
		read(nums);
		rep(i, 0, n) {
			ll cur = 1;
			rep(j, i, n) {
				cur *= nums[j];
				best = max(best, cur);
			}
		}
		printp("The maximum product is %lld.\n", best);
	}
}
