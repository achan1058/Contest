#include <bits/stdc++.h>
#include "header.h"

vi nums;
int cnt;
void backtrack(int d = 0) {
	bool good = true;
	for (int i = 1; i < sz(nums); i++) {
		if (nums[i - 1] > nums[i]) {
			good = false;
			swap(nums[i - 1], nums[i]);
			backtrack(d + 1);
			swap(nums[i - 1], nums[i]);
		}
	}
	if (good && d != 0)
		cnt++;
}

int main() {
	int n;
	whileX(cin >> n && n != 0) {
		nums = vi(n);
		read(nums);
		cnt = 0;
		backtrack();
		printf("There are %d swap maps for input data set %d.\n", cnt, X);
	}
}
