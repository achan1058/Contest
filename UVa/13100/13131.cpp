#include <bits/stdc++.h>
#include "primes.h"
#include "header.h"

int main() {
	forX() {
		int n1, n2;
		cin >> n1 >> n2;
		int s1 = sumFactors(factor(n1)), s2 = 0;
		if (n1 % n2 == 0)
			s2 = sumFactors(factor(n1 / n2));
		print("%d", s1 - s2 * n2);
	}
}
