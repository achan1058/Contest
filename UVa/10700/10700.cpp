#include <bits/stdc++.h>
#include "header.h"

int main() {
	int v;
	char c;
	string s;
	forX() {
		cin >> s;
		stringstream ss(s);
		vi nums;
		string symbol;
		ss >> v;
		nums.push_back(v);
		while (ss >> c >> v) {
			symbol.push_back(c);
			nums.push_back(v);
		}

		ll cur = nums[0], maxtotal = 1;
		for (int i = 1; i < sz(nums); i++) {
			if (symbol[i - 1] == '+')
				cur += nums[i];
			else {
				maxtotal *= cur;
				cur = nums[i];
			}
		}
		maxtotal *= cur;
		cur = nums[0];
		ll mintotal = 0;
		for (int i = 1; i < sz(nums); i++) {
			if (symbol[i - 1] == '*')
				cur *= nums[i];
			else {
				mintotal += cur;
				cur = nums[i];
			}
		}
		mintotal += cur;
		printf("The maximum and minimum are %lld and %lld.\n", maxtotal, mintotal);
	}
}
