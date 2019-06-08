#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi coins = { 1, 2, 5, 10, 20, 50, 100, 200 };
	vi nums(201);
	nums[0] = 1;
	irep(c, coins) {
		rep(j, c, 201)
			nums[j] += nums[j - c];
	}
	printd(nums[200]);
}
