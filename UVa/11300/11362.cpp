#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n;
		cin >> n;
		vs nums(n);
		read(nums);
		sort(all(nums));

		bool good = true;
		rep(i, 1, n) {
			if (nums[i].find(nums[i - 1]) == 0) {
				good = false;
				break;
			}
		}

		print(good ? "YES" : "NO");
	}
}
