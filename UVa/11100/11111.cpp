#include <bits/stdc++.h>
#include "header.h"

int good(vi nums, int& next) {
	if (nums[next] > 0)
		return -1;
	int t = -nums[next], sub = 0;
	next++;
	while (next < sz(nums) && nums[next] < 0) {
		int s = good(nums, next);
		if (s == -1)
			return -1;
		sub += s;
	}
	if (sub >= t || next >= sz(nums) || nums[next] != t)
		return -1;
	next++;
	return t;
}

int main() {
	string s;
	while (getline(cin, s)) {
		stringstream ss(s);
		vi nums;
		int t, next = 0;
		while (ss >> t)
			nums.pb(t);
		if (good(nums, next) == -1 || next != sz(nums))
			print(":-( Try again.");
		else
			print(":-) Matrioshka!");
	}
}
