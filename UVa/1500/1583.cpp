#include <bits/stdc++.h>
#include "bases.h"

int main() {
	vi generator(100001, inf);
	rep(i, 0, 100001) {
		auto digits = intToDigits(i);
		int newi = accumulate(all(digits), 0) + i;
		if (newi <= 100000 && generator[newi] == inf)
			generator[newi] = i;
	}
	forX() {
		int n;
		cin >> n;
		printf("%d\n", generator[n] == inf ? 0 : generator[n]);
	}
}
