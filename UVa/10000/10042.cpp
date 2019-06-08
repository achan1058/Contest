#include <bits/stdc++.h>
#include "primes.h"
#include "header.h"

int digitSum(int n) {
	int result = 0;
	while (n > 0) {
		result += n % 10;
		n /= 10;
	}
	return result;
}

int main() {
	int n;
	forX() {
		cin >> n;
		while (n++, true) {
			if (isPrime(n))
				continue;
			int n1 = digitSum(n), n2 = 0;
			vi fact = factor(n);
			irep(f, fact)
				n2 += digitSum(f);
			if (n1 == n2) {
				printv(n);
				break;
			}
		}
	}
}
