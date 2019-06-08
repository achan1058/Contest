#include <bits/stdc++.h>
#include "dp_algs.h"
#include "header.h"

int main() {
	int v;
	vi nums;
	while (cin >> v)
		nums.pb(v);
	vi res = lis(nums).first;
	printd(sz(res));
	print("-");
	irep(d, res)
		printd(d);
}
