#include <bits/stdc++.h>
#include "dp_algs.h"

int main() {
	int t;
	vi nums;
	while (cin >> t)
		nums.pb(t);
	vi result = lis(nums);
	printf("%d\n-\n", sz(result));
	irep(v, result)
		printf("%d\n", v);
}
