#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n) {
		vi nums(n);
		vb hit(n);
		read(nums);
		bool jolly = true;
		rep(i, 1, sz(nums)) {
			int d = abs(nums[i] - nums[i - 1]);
			if (d >= n || hit[d]) {
				jolly = false;
				break;
			}
			hit[d] = true;
		}
		print("%s", jolly ? "Jolly" : "Not jolly");
	}
}
