#include <bits/stdc++.h>
#include "primes.h"
#include "header.h"

int main() {
	int n;
	while (cin >> n && n != 0)
		printd(n == 1 ? 0 : eulerPhi(factor(n)));
}
