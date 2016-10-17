#include <bits/stdc++.h>
#include "header.h"

int main() {
	int v;
	vi nums;
	while (cin >> v) {
		if (v == 0) {
			if (sz(nums) == 0)
				break;

			bool first = true, isup = false;
			int seqlen = 0, numup = 0, uplen = 0, numdown = 0, downlen = 0;
			for (int i = 1; i < sz(nums); i++) {
				if (first) {
					seqlen++;
					if (nums[i] != nums[i - 1]) {
						first = false;
						if (nums[i] > nums[i - 1])
							isup = true;
						else
							isup = false;
					}
				} else {
					if (isup && nums[i] < nums[i - 1]) {
						uplen += seqlen;
						seqlen = 1;
						numup++;
						isup = false;
					} else if (!isup && nums[i] > nums[i - 1]) {
						downlen += seqlen;
						seqlen = 1;
						numdown++;
						isup = true;
					} else {
						seqlen++;
					}
				}
			}

			if (!first) {
				if (isup) {
					uplen += seqlen;
					numup++;
				} else {
					downlen += seqlen;
					numdown++;
				}
			}

			printf("Nr values = %d:  %.6lf %.6lf\n", sz(nums), numup == 0 ? 0 : double(uplen) / numup, numdown == 0 ? 0 : double(downlen) / numdown);
			nums.clear();
		} else {
			nums.push_back(v);
		}
	}
}
