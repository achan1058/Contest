#include <bits/stdc++.h>
#include "primes.h"

int reverse(int n) {
	int result = 0;
	while (n > 0) {
		result *= 10;
		result += n % 10;
		n /= 10;
	}
	return result;
}

int main() {
	int n;
	while (cin >> n) {
		int rev = reverse(n);
		if (!isPrime(n))
			printf("%d is not prime.\n", n);
		else if (n == rev || !isPrime(rev))
			printf("%d is prime.\n", n);
		else
			printf("%d is emirp.\n", n);
	}
}
