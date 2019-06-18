#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	vi nums(3);
	cin >> n;
	read(nums);
	vi cuts(n + 1, -1);
	cuts[0] = 0;
	irep(a, nums) {
		rep(i, a, n + 1) {
			if (cuts[i - a] >= 0)
				cuts[i] = max(cuts[i], cuts[i - a] + 1);
		}
	}
	print(cuts[n]);
}
