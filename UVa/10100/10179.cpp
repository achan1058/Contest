#include <bits/stdc++.h>
#include "primes.h"

int main() {
	int n;
	while (cin >> n && n != 0)
		printf("%d\n", eulerPhi(factor(n)));
}