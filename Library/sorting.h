#pragma once
#include <bits/stdc++.h>
using namespace std;

template<class T>
long long inversionCount(vector<T>& nums, int l, int r) {
	int m = (l + r) / 2, t1 = m - l, t2 = r - m, i = 0, j = 0;
	long long ans = (t1 > 1 ? inversionCount(nums, l, m) : 0) + (t2 > 1 ? inversionCount(nums, m, r) : 0);
	vector<T> temp(t1 + t2);

	for (; i < t1; i++) {
		for (; j < t2 && nums[l + i] > nums[m + j]; j++)
			temp[i + j] = nums[m + j];
		temp[i + j] = nums[l + i];
		ans += j;
	}
	for (; j < t2; j++)
		temp[i + j] = nums[m + j];
	copy(temp.begin(), temp.end(), nums.begin() + l);
	return ans;
}
