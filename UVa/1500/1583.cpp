#include <bits/stdc++.h>
#include "header.h"

int gen(int n) {
	int ans = n;
	while (n > 0) {
		ans += n % 10;
		n /= 10;
	}
	return ans;
}

int main() {
	vi ans(100100, inf);
	rrep(i, 100000, 1)
		ans[gen(i)] = i;
	forX() {
		int n;
		cin >> n;
		printv(ans[n] == inf ? 0 : ans[n]);
	}
}
