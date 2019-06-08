#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi nums(3);
	read(nums);
	sort(all(nums));
	printv(max(0, nums[2] - nums[1] - nums[0] + 1));
}
