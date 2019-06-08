#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi nums(3);
	read(nums);
	sort(all(nums));
	printd(nums[2] - nums[0]);
}
