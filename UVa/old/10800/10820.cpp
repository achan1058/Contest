#include <bits/stdc++.h>
#include "primes.h"

int main() {
	int n;
	vl lower(50001);
	rep(i, 2, 50001)
		lower[i] = lower[i - 1] + eulerPhi(factor(i));
	while (cin >> n && n != 0)
		printf("%lld\n", 1 + lower[n] * 2);
}
