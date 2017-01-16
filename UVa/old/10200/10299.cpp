#include <bits/stdc++.h>
#include "primes.h"

int main() {
	int n;
	while (cin >> n && n != 0)
		printf("%d\n", n == 1 ? 0 : eulerPhi(factor(n)));
}
