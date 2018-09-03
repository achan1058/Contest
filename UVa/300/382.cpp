#include <bits/stdc++.h>
#include "primes.h"
#include "header.h"

int main() {
	int n;
	print("PERFECTION OUTPUT");
	while (cin >> n && n != 0) {
		int sum = sumFactors(factor(n));
		if (sum < 2 * n)
			print("%5d  DEFICIENT", n);
		else if (sum > 2 * n)
			print("%5d  ABUNDANT", n);
		else
			print("%5d  PERFECT", n);
	}
	print("END OF OUTPUT");
}
