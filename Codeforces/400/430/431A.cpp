#include <bits/stdc++.h>
#include "header.h"

int main() {
	int ans = 0;
	vi nums(4);
	string s;
	read(nums);
	cin >> s;
	irep(c, s)
		ans += nums[c - '1'];
	print(ans);
}
