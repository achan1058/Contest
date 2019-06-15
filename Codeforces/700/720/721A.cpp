#include <bits/stdc++.h>
#include "utils.h"
#include "header.h"

int main() {
	int n;
	string s;
	cin >> n >> s;
	vs nums = tokenize(s, [](int c)->int { return c == 'W'; });
	print(sz(nums));
	rep(i, 0, sz(nums))
		printf("%d%c", sz(nums[i]), i == sz(nums) - 1 ? '\n' : ' ');
}
