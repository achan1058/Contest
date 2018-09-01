#include <bits/stdc++.h>
#include "primes.h"
#include "header.h"

int main() {
	forX() {
		int n;
		cin >> n;
		int sum = sumFactors(factor(n));
		if (sum == 2 * n)
			print("perfect");
		else if (sum < 2 * n)
			print("deficient");
		else
			print("abundant");
	}
}
