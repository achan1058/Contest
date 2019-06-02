#include <bits/stdc++.h>
#include "header.h"

int op(int a, int b, int c) {
	switch (c) {
	case 0:
		return a + b;
	case 1:
		return a - b;
	default:
		return a * b;
	}
}

int main() {
	vi nums(5);
	while (read(nums) && (nums[0] | nums[1] | nums[2] | nums[3] | nums[4]) != 0) {
		sort(all(nums));
		bool good = false;
		do {
			drep(i, j, 3, 3) {
				drep(k, l, 3, 3) {
					if (op(op(op(op(nums[0], nums[1], i), nums[2], j), nums[3], k), nums[4], l) == 23) {
						good = true;
						goto end;
					}
				}
			}
		} while (next_permutation(all(nums)));
	end:;
		if (good)
			print("Possible");
		else
			print("Impossible");
	}
}
