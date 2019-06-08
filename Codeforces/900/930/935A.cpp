#include <bits/stdc++.h>
#include "primes.h"
#include "header.h"

int main() {
	int n;
	cin >> n;
	printv(numFactors(factor(n)) - 1);
}
