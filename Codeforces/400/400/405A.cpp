#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, v;
	cin >> n;
	vi nums(n);
	read(nums);
	sort(all(nums));
	rep(i, 0, n)
		printf("%d%c", nums[i], i == n - 1 ? '\n' : ' ');
}
