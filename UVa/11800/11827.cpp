#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		string s;
		getline(cin, s);
		stringstream ss(s);
		int v, ans = 0;
		vi nums;
		while (ss >> v)
			nums.pb(v);
		drep(i, j, sz(nums), i)
			ans = max(ans, gcd(nums[i], nums[j]));
		printd(ans);
	}
}
