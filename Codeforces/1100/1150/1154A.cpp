#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi nums(4);
	read(nums);
	sort(all(nums));
	print("%d %d %d", nums[3] - nums[2], nums[3] - nums[1], nums[3] - nums[0]);
}
