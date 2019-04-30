#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, b;
	while (cin >> n >> b && (n | b) != 0) {
		vi nums(b);
		vb hit(n + 1);
		int count = 0;
		read(nums);
		drep(i, j, b, i) {
			int t = abs(nums[i] - nums[j]);
			if (!hit[t]) {
				hit[t] = true;
				count++;
			}
		}
		print("%c", count == n ? 'Y' : 'N');
	}
}
