#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n) {
		vi nums(n);
		int ans = 0;
		read(nums);
		drep(i, j, n, n - 1) {
			if (nums[j] > nums[j + 1]) {
				swap(nums[j], nums[j + 1]);
				ans++;
			}
		}
		print("Minimum exchange operations : %d", ans);
	}
}
