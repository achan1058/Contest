#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n, k;
		cin >> n >> k;
		vi nums(n);
		read(nums);
		vvb reach = mb(n + 1, k, false);
		reach[0][0] = true;

		rep(i, 0, sz(nums)) {
			nums[i] = (nums[i] % k + k) % k;
			rep(j, 0, k) {
				reach[i + 1][(j + nums[i]) % k] = reach[i][j] || reach[i + 1][(j + nums[i]) % k];
				reach[i + 1][(j + k - nums[i]) % k] = reach[i][j] || reach[i + 1][(j + k - nums[i]) % k];
			}
		}

		printf("%s\n", reach[n][0] ? "Divisible" : "Not divisible");
	}
}
