#include <bits/stdc++.h>
#include "primes.h"

int main() {
	vi f(1001, -1);
	int n;
	rep(i, 1, 1001) {
		int s = sumFactors(factor(i));
		if (s <= 1000)
			f[s] = i;
	}
	whileX(cin >> n && n != 0)
		printc("%d\n", f[n]);
}
