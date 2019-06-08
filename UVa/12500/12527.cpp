#include <bits/stdc++.h>
#include "header.h"

bool noRepeat(int n) {
	vb tally(10);
	while (n > 0) {
		int t = n % 10;
		if (tally[t])
			return false;
		tally[t] = true;
		n /= 10;
	}
	return true;
}

int main() {
	vi tally(5001);
	rep(i, 1, 5001)
		tally[i] = tally[i - 1] + (noRepeat(i) ? 1 : 0);

	int l, r;
	while (cin >> l >> r)
		printd(tally[r] - tally[l - 1]);
}
