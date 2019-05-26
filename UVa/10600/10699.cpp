#include <bits/stdc++.h>
#include "primes.h"
#include "header.h"

int main() {
	int n;
	while (cin >> n && n != 0)
		print("%d : %d", n, sz(tally(factor(n))));
}
